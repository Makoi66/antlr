
// Generated from myGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "myGrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by myGrammarParser.
 */
class  myGrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by myGrammarParser.
   */
    virtual std::any visitProg(myGrammarParser::ProgContext *context) = 0;

    virtual std::any visitDeclarationStmt(myGrammarParser::DeclarationStmtContext *context) = 0;

    virtual std::any visitAssignmentStmt(myGrammarParser::AssignmentStmtContext *context) = 0;

    virtual std::any visitPrintStmt(myGrammarParser::PrintStmtContext *context) = 0;

    virtual std::any visitIfStmt(myGrammarParser::IfStmtContext *context) = 0;

    virtual std::any visitWhileStmt(myGrammarParser::WhileStmtContext *context) = 0;

    virtual std::any visitBlockStmt(myGrammarParser::BlockStmtContext *context) = 0;

    virtual std::any visitFuncDeclStmt(myGrammarParser::FuncDeclStmtContext *context) = 0;

    virtual std::any visitReturnStmt(myGrammarParser::ReturnStmtContext *context) = 0;

    virtual std::any visitExprStmt(myGrammarParser::ExprStmtContext *context) = 0;

    virtual std::any visitBlock_stmt(myGrammarParser::Block_stmtContext *context) = 0;

    virtual std::any visitDeclaration_stmt(myGrammarParser::Declaration_stmtContext *context) = 0;

    virtual std::any visitAssignment_stmt(myGrammarParser::Assignment_stmtContext *context) = 0;

    virtual std::any visitPrint_stmt(myGrammarParser::Print_stmtContext *context) = 0;

    virtual std::any visitIf_stmt(myGrammarParser::If_stmtContext *context) = 0;

    virtual std::any visitWhile_stmt(myGrammarParser::While_stmtContext *context) = 0;

    virtual std::any visitFunc_decl_stmt(myGrammarParser::Func_decl_stmtContext *context) = 0;

    virtual std::any visitReturn_stmt(myGrammarParser::Return_stmtContext *context) = 0;

    virtual std::any visitNull(myGrammarParser::NullContext *context) = 0;

    virtual std::any visitAddSub(myGrammarParser::AddSubContext *context) = 0;

    virtual std::any visitMulDiv(myGrammarParser::MulDivContext *context) = 0;

    virtual std::any visitParens(myGrammarParser::ParensContext *context) = 0;

    virtual std::any visitRelational(myGrammarParser::RelationalContext *context) = 0;

    virtual std::any visitTrue(myGrammarParser::TrueContext *context) = 0;

    virtual std::any visitString(myGrammarParser::StringContext *context) = 0;

    virtual std::any visitFalse(myGrammarParser::FalseContext *context) = 0;

    virtual std::any visitLogicalOr(myGrammarParser::LogicalOrContext *context) = 0;

    virtual std::any visitFuncCall(myGrammarParser::FuncCallContext *context) = 0;

    virtual std::any visitNumber(myGrammarParser::NumberContext *context) = 0;

    virtual std::any visitLogicalAnd(myGrammarParser::LogicalAndContext *context) = 0;

    virtual std::any visitNotExpr(myGrammarParser::NotExprContext *context) = 0;

    virtual std::any visitId(myGrammarParser::IdContext *context) = 0;

    virtual std::any visitEquality(myGrammarParser::EqualityContext *context) = 0;


};

