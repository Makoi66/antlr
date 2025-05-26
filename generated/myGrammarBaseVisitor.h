
// Generated from myGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "myGrammarVisitor.h"


/**
 * This class provides an empty implementation of myGrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  myGrammarBaseVisitor : public myGrammarVisitor {
public:

  virtual std::any visitProg(myGrammarParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclarationStmt(myGrammarParser::DeclarationStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentStmt(myGrammarParser::AssignmentStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrintStmt(myGrammarParser::PrintStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStmt(myGrammarParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStmt(myGrammarParser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockStmt(myGrammarParser::BlockStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDeclStmt(myGrammarParser::FuncDeclStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStmt(myGrammarParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprStmt(myGrammarParser::ExprStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock_stmt(myGrammarParser::Block_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeclaration_stmt(myGrammarParser::Declaration_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment_stmt(myGrammarParser::Assignment_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint_stmt(myGrammarParser::Print_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf_stmt(myGrammarParser::If_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile_stmt(myGrammarParser::While_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunc_decl_stmt(myGrammarParser::Func_decl_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn_stmt(myGrammarParser::Return_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNull(myGrammarParser::NullContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddSub(myGrammarParser::AddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDiv(myGrammarParser::MulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParens(myGrammarParser::ParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelational(myGrammarParser::RelationalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTrue(myGrammarParser::TrueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitString(myGrammarParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFalse(myGrammarParser::FalseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalOr(myGrammarParser::LogicalOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncCall(myGrammarParser::FuncCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(myGrammarParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalAnd(myGrammarParser::LogicalAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNotExpr(myGrammarParser::NotExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId(myGrammarParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEquality(myGrammarParser::EqualityContext *ctx) override {
    return visitChildren(ctx);
  }


};

