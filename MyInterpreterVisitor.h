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

    virtual std::any visitDeclaration_stmt(myGrammarParser::Declaration_stmtContext* ctx) override {
        std::string varName = ctx->name->getText();

        if (scopes.back().count(varName)) {
            throw std::runtime_error("Variable '" + varName + "' already declared in this scope.");
        }

        std::any value;
        if (ctx->value != nullptr) {
            value = visit(ctx->value);
        }
        else {
            value = nullptr;
        }
        scopes.back()[varName] = value;
        return std::any();
    }

    virtual std::any visitAssignment_stmt(myGrammarParser::Assignment_stmtContext* ctx) override {
        std::string varName = ctx->name->getText();
        std::any value = visit(ctx->value);

        setVariable(varName, value);
        return std::any();
    }

    virtual std::any visitPrint_stmt(myGrammarParser::Print_stmtContext* ctx) override {
        std::any val = visit(ctx->value);
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

    virtual std::any visitIf_stmt(myGrammarParser::If_stmtContext* ctx) override {
        std::any conditionResult = visit(ctx->condition);
        bool condition = evaluateCondition(conditionResult);

        if (condition) {
            visit(ctx->thenBlock);
        }
        else if (ctx->KW_ELSE() != nullptr) {
            visit(ctx->elseBlock);
        }
        return std::any();
    }

    virtual std::any visitWhile_stmt(myGrammarParser::While_stmtContext* ctx) override {
        while (true) {
            std::any conditionResult = visit(ctx->condition);
            bool condition = evaluateCondition(conditionResult);
            if (!condition) {
                break;
            }
            visit(ctx->body);
        }
        return std::any();
    }

    virtual std::any visitBlock_stmt(myGrammarParser::Block_stmtContext* ctx) override {
        pushScope();
        std::any result;
        try {
            for (auto stmt_ctx : ctx->statement()) {
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

    virtual std::any visitFunc_decl_stmt(myGrammarParser::Func_decl_stmtContext* ctx) override {
        FunctionDefinition func;
        func.name = ctx->name->getText();
        func.body = ctx->body;

        for (auto param_node : ctx->params) {
            func.params.push_back(param_node->getText());
        }
        functions[func.name] = func;
        return std::any();
    }

    virtual std::any visitReturn_stmt(myGrammarParser::Return_stmtContext* ctx) override {
        std::any value;
        if (ctx->value != nullptr) {
            value = visit(ctx->value);
        }
        else {
            value = nullptr;
        }
        throw ReturnException(value);
    }

    virtual std::any visitExprStmt(myGrammarParser::ExprStmtContext* ctx) override {
        visit(ctx->expr());
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