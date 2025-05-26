#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stdexcept>
#include <any>     
#include "generated/myGrammarBaseVisitor.h"     

struct FunctionDefinition {
    std::string name;
    std::vector<std::string> params;
    myGrammarParser::Block_stmtContext* body;
};

class ReturnException : public std::exception {
public:
    std::any value;
    ReturnException(std::any val) : value(val) {}
    const char* what() const noexcept override { return "Return statement encountered."; }
};


class MyInterpreterVisitor : public myGrammarBaseVisitor {
public:
    std::vector<std::map<std::string, std::any>> scopes;
    std::map<std::string, FunctionDefinition> functions;

    MyInterpreterVisitor() {
        scopes.push_back({});
    }

    void pushScope() {
        scopes.push_back({});
    }

    void popScope() {
        if (scopes.empty()) {
            throw std::runtime_error("Scope stack empty!");
        }
        scopes.pop_back();
    }

    std::any getVariable(const std::string& name) {
        for (int i = scopes.size() - 1; i >= 0; --i) {
            if (scopes[i].count(name)) {
                return scopes[i][name];
            }
        }
        throw std::runtime_error("Undefined variable: " + name);
    }

    void setVariable(const std::string& name, std::any value) {
        for (int i = scopes.size() - 1; i >= 0; --i) {
            if (scopes[i].count(name)) {
                scopes[i][name] = value;
                return;
            }
        }
        scopes.back()[name] = value;
    }

    bool evaluateCondition(std::any val) {
        if (val.type() == typeid(bool)) {
            return std::any_cast<bool>(val);
        }
        else if (val.type() == typeid(int)) {
            return std::any_cast<int>(val) != 0;
        }
        else if (val.type() == typeid(std::string)) {
            return !std::any_cast<std::string>(val).empty();
        }
        else if (!val.has_value()) {
            return false;
        }
        throw std::runtime_error("Type error: Cannot convert type " + std::string(val.type().name()) + " to boolean.");
    }

    virtual std::any visitProg(myGrammarParser::ProgContext* ctx) override {
        for (auto stmt_ctx : ctx->statement()) {
            try {
                visit(stmt_ctx);
            }
            catch (const ReturnException& e) {
                throw std::runtime_error("Return statement outside function body!");
            }
        }
        return std::any();
    }

    // --- ����������: ������ ����� ��������� �������� (ctx->declaration_stmt()->...) ---
    virtual std::any visitDeclarationStmt(myGrammarParser::DeclarationStmtContext* ctx) override {
        myGrammarParser::Declaration_stmtContext* declCtx = ctx->declaration_stmt(); // �������� ��������� ��������
        std::string varName = declCtx->name->getText();

        if (scopes.back().count(varName)) {
            throw std::runtime_error("Variable '" + varName + "' already declared in this scope.");
        }

        std::any value;
        if (declCtx->value != nullptr) {
            value = visit(declCtx->value);
        }
        else {
            value = nullptr;
        }
        scopes.back()[varName] = value;
        return std::any();
    }

    // --- ����������: ������ ����� ��������� �������� (ctx->assignment_stmt()->...) ---
    virtual std::any visitAssignmentStmt(myGrammarParser::AssignmentStmtContext* ctx) override {
        myGrammarParser::Assignment_stmtContext* assignCtx = ctx->assignment_stmt(); // �������� ��������� ��������
        std::string varName = assignCtx->name->getText();
        std::any value = visit(assignCtx->value);

        setVariable(varName, value);
        return std::any();
    }

    // --- ����������: ������ ����� ��������� �������� (ctx->print_stmt()->...) ---
    virtual std::any visitPrintStmt(myGrammarParser::PrintStmtContext* ctx) override {
        myGrammarParser::Print_stmtContext* printCtx = ctx->print_stmt(); // �������� ��������� ��������
        std::any val = visit(printCtx->value);
        if (val.type() == typeid(int)) {
            std::cout << std::any_cast<int>(val) << std::endl;
        }
        else if (val.type() == typeid(std::string)) {
            std::cout << std::any_cast<std::string>(val) << std::endl;
        }
        else if (val.type() == typeid(bool)) {
            std::cout << (std::any_cast<bool>(val) ? "true" : "false") << std::endl;
        }
        else if (!val.has_value()) {
            std::cout << "null" << std::endl;
        }
        else {
            std::cout << "Unknown type to print: " << val.type().name() << std::endl;
        }
        return std::any();
    }

    // --- ����������: ������ ����� ��������� �������� (ctx->if_stmt()->...) ---
    virtual std::any visitIfStmt(myGrammarParser::IfStmtContext* ctx) override {
        myGrammarParser::If_stmtContext* ifCtx = ctx->if_stmt(); // �������� ��������� ��������
        std::any conditionResult = visit(ifCtx->condition);
        bool condition = evaluateCondition(conditionResult);

        if (condition) {
            visit(ifCtx->thenBlock);
        }
        // KW_ELSE() �������� ������ If_stmtContext, �� �� �������� ��� ����� ifCtx.
        // ��� ctx->if_stmt()->KW_ELSE()
        else if (ifCtx->KW_ELSE() != nullptr) {
            visit(ifCtx->elseBlock);
        }
        return std::any();
    }

    // --- ����������: ������ ����� ��������� �������� (ctx->while_stmt()->...) ---
    virtual std::any visitWhileStmt(myGrammarParser::WhileStmtContext* ctx) override {
        myGrammarParser::While_stmtContext* whileCtx = ctx->while_stmt(); // �������� ��������� ��������
        while (true) {
            std::any conditionResult = visit(whileCtx->condition);
            bool condition = evaluateCondition(conditionResult);
            if (!condition) {
                break;
            }
            visit(whileCtx->body);
        }
        return std::any();
    }

    // --- ����������: ������ ����� ��������� �������� (ctx->block_stmt()->...) ---
    virtual std::any visitBlockStmt(myGrammarParser::BlockStmtContext* ctx) override {
        myGrammarParser::Block_stmtContext* blockCtx = ctx->block_stmt(); // �������� ��������� ��������
        pushScope();
        std::any result;
        try {
            for (auto stmt_ctx : blockCtx->statement()) { // statement() - ��� ����� Block_stmtContext
                visit(stmt_ctx);
            }
        }
        catch (const ReturnException& e) {
            result = e.value;
            popScope();
            throw;
        }
        popScope();
        return result;
    }

    // --- ����������: ������ ����� ��������� �������� (ctx->func_decl_stmt()->...) ---
    virtual std::any visitFuncDeclStmt(myGrammarParser::FuncDeclStmtContext* ctx) override {
        myGrammarParser::Func_decl_stmtContext* funcDeclCtx = ctx->func_decl_stmt(); // �������� ��������� ��������
        FunctionDefinition func;
        func.name = funcDeclCtx->name->getText();
        func.body = funcDeclCtx->body;

        for (auto param_node : funcDeclCtx->params) {
            func.params.push_back(param_node->getText());
        }
        functions[func.name] = func;
        return std::any();
    }

    // --- ����������: ������ ����� ��������� �������� (ctx->return_stmt()->...) ---
    virtual std::any visitReturnStmt(myGrammarParser::ReturnStmtContext* ctx) override {
        myGrammarParser::Return_stmtContext* returnCtx = ctx->return_stmt(); // �������� ��������� ��������
        std::any value;
        if (returnCtx->value != nullptr) {
            value = visit(returnCtx->value);
        }
        else {
            value = nullptr;
        }
        throw ReturnException(value);
    }

    // --- ��� ExprStmtContext, IdContext, FuncCallContext, NotExprContext ---
    // ��� ��������� �������� �������� ������ �����, ��� ��� ��� �� ��������
    // �����������-��������� ��� ������ �� 'statement'.
    // ��� ���� �������� ��������� ����������� ��� ����������� expr (��������, IdContext),
    // ���� �������� �������� expr (��������, ExprStmtContext, NotExprContext, ParensContext).

    virtual std::any visitExprStmt(myGrammarParser::ExprStmtContext* ctx) override {
        visit(ctx->expr()); // ctx->expr() ���������� ExprContext*, ��� ��� ������ �������
        return std::any();
    }

    virtual std::any visitLogicalOr(myGrammarParser::LogicalOrContext* ctx) override {
        bool left = evaluateCondition(visit(ctx->expr(0)));
        if (left) return true;
        bool right = evaluateCondition(visit(ctx->expr(1)));
        return left || right;
    }

    virtual std::any visitLogicalAnd(myGrammarParser::LogicalAndContext* ctx) override {
        bool left = evaluateCondition(visit(ctx->expr(0)));
        if (!left) return false;
        bool right = evaluateCondition(visit(ctx->expr(1)));
        return left && right;
    }

    virtual std::any visitNotExpr(myGrammarParser::NotExprContext* ctx) override {
        return !evaluateCondition(visit(ctx->expr()));
    }

    virtual std::any visitEquality(myGrammarParser::EqualityContext* ctx) override {
        std::any left = visit(ctx->expr(0));
        std::any right = visit(ctx->expr(1));

        if (left.type() == typeid(int) && right.type() == typeid(int)) {
            return std::any_cast<int>(left) == std::any_cast<int>(right);
        }
        else if (left.type() == typeid(std::string) && right.type() == typeid(std::string)) {
            return std::any_cast<std::string>(left) == std::any_cast<std::string>(right);
        }
        else if (left.type() == typeid(bool) && right.type() == typeid(bool)) {
            return std::any_cast<bool>(left) == std::any_cast<bool>(right);
        }
        else if (!left.has_value() && !right.has_value()) {
            return true;
        }
        else if (ctx->op->getText() == "==") {
            return false;
        }
        else {
            return true;
        }
    }

    virtual std::any visitRelational(myGrammarParser::RelationalContext* ctx) override {
        std::any left = visit(ctx->expr(0));
        std::any right = visit(ctx->expr(1));

        if (left.type() != typeid(int) || right.type() != typeid(int)) {
            throw std::runtime_error("Type error: Relational operator requires two numbers.");
        }

        int l = std::any_cast<int>(left);
        int r = std::any_cast<int>(right);
        std::string op = ctx->op->getText();

        if (op == "<")  return l < r;
        if (op == "<=") return l <= r;
        if (op == ">")  return l > r;
        if (op == ">=") return l >= r;
        return false;
    }

    virtual std::any visitAddSub(myGrammarParser::AddSubContext* ctx) override {
        std::any left = visit(ctx->expr(0));
        std::any right = visit(ctx->expr(1));
        std::string op = ctx->op->getText();

        if (left.type() == typeid(int) && right.type() == typeid(int)) {
            int l = std::any_cast<int>(left);
            int r = std::any_cast<int>(right);
            if (op == "+") return l + r;
            if (op == "-") return l - r;
        }
        else if (left.type() == typeid(std::string) && right.type() == typeid(std::string) && op == "+") {
            return std::any_cast<std::string>(left) + std::any_cast<std::string>(right);
        }
        else {
            throw std::runtime_error("Type error: Cannot perform " + op + " on given types.");
        }
        return std::any();
    }

    virtual std::any visitMulDiv(myGrammarParser::MulDivContext* ctx) override {
        std::any left = visit(ctx->expr(0));
        std::any right = visit(ctx->expr(1));
        std::string op = ctx->op->getText();

        if (left.type() != typeid(int) || right.type() != typeid(int)) {
            throw std::runtime_error("Type error: Multiplication/Division requires two numbers.");
        }

        int l = std::any_cast<int>(left);
        int r = std::any_cast<int>(right);

        if (op == "*") {
            return l * r;
        }
        else if (op == "/") {
            if (r == 0) {
                throw std::runtime_error("Division by zero!");
            }
            return l / r;
        }
        return std::any();
    }

    virtual std::any visitFuncCall(myGrammarParser::FuncCallContext* ctx) override {
        std::string funcName = ctx->name->getText();

        if (functions.count(funcName) == 0) {
            throw std::runtime_error("Undefined function: " + funcName);
        }

        FunctionDefinition func = functions[funcName];

        std::vector<std::any> args;
        for (auto arg_ctx : ctx->args) {
            args.push_back(visit(arg_ctx));
        }

        if (args.size() != func.params.size()) {
            throw std::runtime_error("Function " + funcName + " expected " + std::to_string(func.params.size()) +
                " arguments, but got " + std::to_string(args.size()) + ".");
        }

        pushScope();
        std::any returnValue;
        try {
            for (size_t i = 0; i < func.params.size(); ++i) {
                scopes.back()[func.params[i]] = args[i];
            }
            visit(func.body);
        }
        catch (const ReturnException& e) {
            returnValue = e.value;
        }
        catch (...) {
            popScope();
            throw;
        }
        popScope();
        return returnValue;
    }

    virtual std::any visitId(myGrammarParser::IdContext* ctx) override {
        return getVariable(ctx->name->getText());
    }

    virtual std::any visitNumber(myGrammarParser::NumberContext* ctx) override {
        return std::stoi(ctx->NUMBER()->getText());
    }

    virtual std::any visitString(myGrammarParser::StringContext* ctx) override {
        std::string s = ctx->STRING()->getText();
        s = s.substr(1, s.length() - 2);

        std::string result = "";
        for (size_t i = 0; i < s.length(); ++i) {
            if (s[i] == '\\' && i + 1 < s.length()) {
                i++;
                switch (s[i]) {
                case 'n': result += '\n'; break;
                case 't': result += '\t'; break;
                case 'r': result += '\r'; break;
                case 'b': result += '\b'; break;
                case 'f': result += '\f'; break;
                case '"': result += '"'; break;
                case '\'': result += '\''; break;
                case '\\': result += '\\'; break;
                default:
                    result += s[i];
                    break;
                }
            }
            else {
                result += s[i];
            }
        }
        return result;
    }

    virtual std::any visitTrue(myGrammarParser::TrueContext* ctx) override {
        return true;
    }

    virtual std::any visitFalse(myGrammarParser::FalseContext* ctx) override {
        return false;
    }

    virtual std::any visitNull(myGrammarParser::NullContext* ctx) override {
        return nullptr;
    }

    virtual std::any visitParens(myGrammarParser::ParensContext* ctx) override {
        return visit(ctx->expr());
    }
};