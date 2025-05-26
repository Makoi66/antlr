
// Generated from myGrammar.g4 by ANTLR 4.13.2


#include "myGrammarVisitor.h"

#include "myGrammarParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MyGrammarParserStaticData final {
  MyGrammarParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MyGrammarParserStaticData(const MyGrammarParserStaticData&) = delete;
  MyGrammarParserStaticData(MyGrammarParserStaticData&&) = delete;
  MyGrammarParserStaticData& operator=(const MyGrammarParserStaticData&) = delete;
  MyGrammarParserStaticData& operator=(MyGrammarParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mygrammarParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<MyGrammarParserStaticData> mygrammarParserStaticData = nullptr;

void mygrammarParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mygrammarParserStaticData != nullptr) {
    return;
  }
#else
  assert(mygrammarParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MyGrammarParserStaticData>(
    std::vector<std::string>{
      "prog", "statement", "block_stmt", "declaration_stmt", "assignment_stmt", 
      "print_stmt", "if_stmt", "while_stmt", "func_decl_stmt", "return_stmt", 
      "expr"
    },
    std::vector<std::string>{
      "", "", "", "", "'let'", "'if'", "'else'", "'while'", "'print'", "'true'", 
      "'false'", "'null'", "'func'", "'return'", "", "", "", "'('", "')'", 
      "'{'", "'}'", "','", "';'", "'='", "'+'", "'-'", "'*'", "'/'", "'=='", 
      "'!='", "'<'", "'<='", "'>'", "'>='"
    },
    std::vector<std::string>{
      "", "WS", "LINE_COMMENT", "BLOCK_COMMENT", "KW_LET", "KW_IF", "KW_ELSE", 
      "KW_WHILE", "KW_PRINT", "KW_TRUE", "KW_FALSE", "KW_NULL", "KW_FUNC", 
      "KW_RETURN", "NUMBER", "STRING", "ID", "LPAREN", "RPAREN", "LBRACE", 
      "RBRACE", "COMMA", "SEMICOLON", "ASSIGN", "ADD", "SUB", "MUL", "DIV", 
      "EQ", "NEQ", "LT", "LE", "GT", "GE", "AND", "OR", "NOT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,36,154,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,1,0,1,0,5,0,26,8,0,10,0,12,0,29,9,
  	0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,42,8,1,1,2,1,2,1,2,
  	1,2,5,2,48,8,2,10,2,12,2,51,9,2,1,2,1,2,1,3,1,3,1,3,1,3,3,3,59,8,3,1,
  	4,1,4,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,75,8,6,1,7,
  	1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,5,8,89,8,8,10,8,12,8,92,9,
  	8,3,8,94,8,8,1,8,1,8,1,8,1,9,1,9,3,9,101,8,9,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,1,10,5,10,111,8,10,10,10,12,10,114,9,10,3,10,116,8,10,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,3,10,129,8,10,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,1,10,5,10,149,8,10,10,10,12,10,152,9,10,1,10,0,1,20,11,0,2,
  	4,6,8,10,12,14,16,18,20,0,4,1,0,28,29,1,0,30,33,1,0,24,25,1,0,26,27,173,
  	0,27,1,0,0,0,2,41,1,0,0,0,4,43,1,0,0,0,6,54,1,0,0,0,8,60,1,0,0,0,10,64,
  	1,0,0,0,12,67,1,0,0,0,14,76,1,0,0,0,16,82,1,0,0,0,18,98,1,0,0,0,20,128,
  	1,0,0,0,22,23,3,2,1,0,23,24,5,22,0,0,24,26,1,0,0,0,25,22,1,0,0,0,26,29,
  	1,0,0,0,27,25,1,0,0,0,27,28,1,0,0,0,28,30,1,0,0,0,29,27,1,0,0,0,30,31,
  	5,0,0,1,31,1,1,0,0,0,32,42,3,6,3,0,33,42,3,8,4,0,34,42,3,10,5,0,35,42,
  	3,12,6,0,36,42,3,14,7,0,37,42,3,4,2,0,38,42,3,16,8,0,39,42,3,18,9,0,40,
  	42,3,20,10,0,41,32,1,0,0,0,41,33,1,0,0,0,41,34,1,0,0,0,41,35,1,0,0,0,
  	41,36,1,0,0,0,41,37,1,0,0,0,41,38,1,0,0,0,41,39,1,0,0,0,41,40,1,0,0,0,
  	42,3,1,0,0,0,43,49,5,19,0,0,44,45,3,2,1,0,45,46,5,22,0,0,46,48,1,0,0,
  	0,47,44,1,0,0,0,48,51,1,0,0,0,49,47,1,0,0,0,49,50,1,0,0,0,50,52,1,0,0,
  	0,51,49,1,0,0,0,52,53,5,20,0,0,53,5,1,0,0,0,54,55,5,4,0,0,55,58,5,16,
  	0,0,56,57,5,23,0,0,57,59,3,20,10,0,58,56,1,0,0,0,58,59,1,0,0,0,59,7,1,
  	0,0,0,60,61,5,16,0,0,61,62,5,23,0,0,62,63,3,20,10,0,63,9,1,0,0,0,64,65,
  	5,8,0,0,65,66,3,20,10,0,66,11,1,0,0,0,67,68,5,5,0,0,68,69,5,17,0,0,69,
  	70,3,20,10,0,70,71,5,18,0,0,71,74,3,4,2,0,72,73,5,6,0,0,73,75,3,4,2,0,
  	74,72,1,0,0,0,74,75,1,0,0,0,75,13,1,0,0,0,76,77,5,7,0,0,77,78,5,17,0,
  	0,78,79,3,20,10,0,79,80,5,18,0,0,80,81,3,4,2,0,81,15,1,0,0,0,82,83,5,
  	12,0,0,83,84,5,16,0,0,84,93,5,17,0,0,85,90,5,16,0,0,86,87,5,21,0,0,87,
  	89,5,16,0,0,88,86,1,0,0,0,89,92,1,0,0,0,90,88,1,0,0,0,90,91,1,0,0,0,91,
  	94,1,0,0,0,92,90,1,0,0,0,93,85,1,0,0,0,93,94,1,0,0,0,94,95,1,0,0,0,95,
  	96,5,18,0,0,96,97,3,4,2,0,97,17,1,0,0,0,98,100,5,13,0,0,99,101,3,20,10,
  	0,100,99,1,0,0,0,100,101,1,0,0,0,101,19,1,0,0,0,102,103,6,10,-1,0,103,
  	104,5,36,0,0,104,129,3,20,10,13,105,106,5,16,0,0,106,115,5,17,0,0,107,
  	112,3,20,10,0,108,109,5,21,0,0,109,111,3,20,10,0,110,108,1,0,0,0,111,
  	114,1,0,0,0,112,110,1,0,0,0,112,113,1,0,0,0,113,116,1,0,0,0,114,112,1,
  	0,0,0,115,107,1,0,0,0,115,116,1,0,0,0,116,117,1,0,0,0,117,129,5,18,0,
  	0,118,129,5,16,0,0,119,129,5,14,0,0,120,129,5,15,0,0,121,129,5,9,0,0,
  	122,129,5,10,0,0,123,129,5,11,0,0,124,125,5,17,0,0,125,126,3,20,10,0,
  	126,127,5,18,0,0,127,129,1,0,0,0,128,102,1,0,0,0,128,105,1,0,0,0,128,
  	118,1,0,0,0,128,119,1,0,0,0,128,120,1,0,0,0,128,121,1,0,0,0,128,122,1,
  	0,0,0,128,123,1,0,0,0,128,124,1,0,0,0,129,150,1,0,0,0,130,131,10,15,0,
  	0,131,132,5,35,0,0,132,149,3,20,10,16,133,134,10,14,0,0,134,135,5,34,
  	0,0,135,149,3,20,10,15,136,137,10,12,0,0,137,138,7,0,0,0,138,149,3,20,
  	10,13,139,140,10,11,0,0,140,141,7,1,0,0,141,149,3,20,10,12,142,143,10,
  	10,0,0,143,144,7,2,0,0,144,149,3,20,10,11,145,146,10,9,0,0,146,147,7,
  	3,0,0,147,149,3,20,10,10,148,130,1,0,0,0,148,133,1,0,0,0,148,136,1,0,
  	0,0,148,139,1,0,0,0,148,142,1,0,0,0,148,145,1,0,0,0,149,152,1,0,0,0,150,
  	148,1,0,0,0,150,151,1,0,0,0,151,21,1,0,0,0,152,150,1,0,0,0,13,27,41,49,
  	58,74,90,93,100,112,115,128,148,150
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mygrammarParserStaticData = std::move(staticData);
}

}

myGrammarParser::myGrammarParser(TokenStream *input) : myGrammarParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

myGrammarParser::myGrammarParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  myGrammarParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mygrammarParserStaticData->atn, mygrammarParserStaticData->decisionToDFA, mygrammarParserStaticData->sharedContextCache, options);
}

myGrammarParser::~myGrammarParser() {
  delete _interpreter;
}

const atn::ATN& myGrammarParser::getATN() const {
  return *mygrammarParserStaticData->atn;
}

std::string myGrammarParser::getGrammarFileName() const {
  return "myGrammar.g4";
}

const std::vector<std::string>& myGrammarParser::getRuleNames() const {
  return mygrammarParserStaticData->ruleNames;
}

const dfa::Vocabulary& myGrammarParser::getVocabulary() const {
  return mygrammarParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView myGrammarParser::getSerializedATN() const {
  return mygrammarParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

myGrammarParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myGrammarParser::ProgContext::EOF() {
  return getToken(myGrammarParser::EOF, 0);
}

std::vector<myGrammarParser::StatementContext *> myGrammarParser::ProgContext::statement() {
  return getRuleContexts<myGrammarParser::StatementContext>();
}

myGrammarParser::StatementContext* myGrammarParser::ProgContext::statement(size_t i) {
  return getRuleContext<myGrammarParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> myGrammarParser::ProgContext::SEMICOLON() {
  return getTokens(myGrammarParser::SEMICOLON);
}

tree::TerminalNode* myGrammarParser::ProgContext::SEMICOLON(size_t i) {
  return getToken(myGrammarParser::SEMICOLON, i);
}


size_t myGrammarParser::ProgContext::getRuleIndex() const {
  return myGrammarParser::RuleProg;
}


std::any myGrammarParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

myGrammarParser::ProgContext* myGrammarParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, myGrammarParser::RuleProg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(27);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 68720263088) != 0)) {
      setState(22);
      statement();
      setState(23);
      match(myGrammarParser::SEMICOLON);
      setState(29);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(30);
    match(myGrammarParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

myGrammarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t myGrammarParser::StatementContext::getRuleIndex() const {
  return myGrammarParser::RuleStatement;
}

void myGrammarParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrintStmtContext ------------------------------------------------------------------

myGrammarParser::Print_stmtContext* myGrammarParser::PrintStmtContext::print_stmt() {
  return getRuleContext<myGrammarParser::Print_stmtContext>(0);
}

myGrammarParser::PrintStmtContext::PrintStmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::PrintStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitPrintStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStmtContext ------------------------------------------------------------------

myGrammarParser::If_stmtContext* myGrammarParser::IfStmtContext::if_stmt() {
  return getRuleContext<myGrammarParser::If_stmtContext>(0);
}

myGrammarParser::IfStmtContext::IfStmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DeclarationStmtContext ------------------------------------------------------------------

myGrammarParser::Declaration_stmtContext* myGrammarParser::DeclarationStmtContext::declaration_stmt() {
  return getRuleContext<myGrammarParser::Declaration_stmtContext>(0);
}

myGrammarParser::DeclarationStmtContext::DeclarationStmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::DeclarationStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitDeclarationStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprStmtContext ------------------------------------------------------------------

myGrammarParser::ExprContext* myGrammarParser::ExprStmtContext::expr() {
  return getRuleContext<myGrammarParser::ExprContext>(0);
}

myGrammarParser::ExprStmtContext::ExprStmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::ExprStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitExprStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileStmtContext ------------------------------------------------------------------

myGrammarParser::While_stmtContext* myGrammarParser::WhileStmtContext::while_stmt() {
  return getRuleContext<myGrammarParser::While_stmtContext>(0);
}

myGrammarParser::WhileStmtContext::WhileStmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlockStmtContext ------------------------------------------------------------------

myGrammarParser::Block_stmtContext* myGrammarParser::BlockStmtContext::block_stmt() {
  return getRuleContext<myGrammarParser::Block_stmtContext>(0);
}

myGrammarParser::BlockStmtContext::BlockStmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::BlockStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitBlockStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignmentStmtContext ------------------------------------------------------------------

myGrammarParser::Assignment_stmtContext* myGrammarParser::AssignmentStmtContext::assignment_stmt() {
  return getRuleContext<myGrammarParser::Assignment_stmtContext>(0);
}

myGrammarParser::AssignmentStmtContext::AssignmentStmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::AssignmentStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitAssignmentStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncDeclStmtContext ------------------------------------------------------------------

myGrammarParser::Func_decl_stmtContext* myGrammarParser::FuncDeclStmtContext::func_decl_stmt() {
  return getRuleContext<myGrammarParser::Func_decl_stmtContext>(0);
}

myGrammarParser::FuncDeclStmtContext::FuncDeclStmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::FuncDeclStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitFuncDeclStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnStmtContext ------------------------------------------------------------------

myGrammarParser::Return_stmtContext* myGrammarParser::ReturnStmtContext::return_stmt() {
  return getRuleContext<myGrammarParser::Return_stmtContext>(0);
}

myGrammarParser::ReturnStmtContext::ReturnStmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}
myGrammarParser::StatementContext* myGrammarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, myGrammarParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(41);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<myGrammarParser::DeclarationStmtContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(32);
      declaration_stmt();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<myGrammarParser::AssignmentStmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(33);
      assignment_stmt();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<myGrammarParser::PrintStmtContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(34);
      print_stmt();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<myGrammarParser::IfStmtContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(35);
      if_stmt();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<myGrammarParser::WhileStmtContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(36);
      while_stmt();
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<myGrammarParser::BlockStmtContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(37);
      block_stmt();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<myGrammarParser::FuncDeclStmtContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(38);
      func_decl_stmt();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<myGrammarParser::ReturnStmtContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(39);
      return_stmt();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<myGrammarParser::ExprStmtContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(40);
      expr(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Block_stmtContext ------------------------------------------------------------------

myGrammarParser::Block_stmtContext::Block_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myGrammarParser::Block_stmtContext::LBRACE() {
  return getToken(myGrammarParser::LBRACE, 0);
}

tree::TerminalNode* myGrammarParser::Block_stmtContext::RBRACE() {
  return getToken(myGrammarParser::RBRACE, 0);
}

std::vector<myGrammarParser::StatementContext *> myGrammarParser::Block_stmtContext::statement() {
  return getRuleContexts<myGrammarParser::StatementContext>();
}

myGrammarParser::StatementContext* myGrammarParser::Block_stmtContext::statement(size_t i) {
  return getRuleContext<myGrammarParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> myGrammarParser::Block_stmtContext::SEMICOLON() {
  return getTokens(myGrammarParser::SEMICOLON);
}

tree::TerminalNode* myGrammarParser::Block_stmtContext::SEMICOLON(size_t i) {
  return getToken(myGrammarParser::SEMICOLON, i);
}


size_t myGrammarParser::Block_stmtContext::getRuleIndex() const {
  return myGrammarParser::RuleBlock_stmt;
}


std::any myGrammarParser::Block_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitBlock_stmt(this);
  else
    return visitor->visitChildren(this);
}

myGrammarParser::Block_stmtContext* myGrammarParser::block_stmt() {
  Block_stmtContext *_localctx = _tracker.createInstance<Block_stmtContext>(_ctx, getState());
  enterRule(_localctx, 4, myGrammarParser::RuleBlock_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(43);
    match(myGrammarParser::LBRACE);
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 68720263088) != 0)) {
      setState(44);
      statement();
      setState(45);
      match(myGrammarParser::SEMICOLON);
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(52);
    match(myGrammarParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Declaration_stmtContext ------------------------------------------------------------------

myGrammarParser::Declaration_stmtContext::Declaration_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myGrammarParser::Declaration_stmtContext::KW_LET() {
  return getToken(myGrammarParser::KW_LET, 0);
}

tree::TerminalNode* myGrammarParser::Declaration_stmtContext::ID() {
  return getToken(myGrammarParser::ID, 0);
}

tree::TerminalNode* myGrammarParser::Declaration_stmtContext::ASSIGN() {
  return getToken(myGrammarParser::ASSIGN, 0);
}

myGrammarParser::ExprContext* myGrammarParser::Declaration_stmtContext::expr() {
  return getRuleContext<myGrammarParser::ExprContext>(0);
}


size_t myGrammarParser::Declaration_stmtContext::getRuleIndex() const {
  return myGrammarParser::RuleDeclaration_stmt;
}


std::any myGrammarParser::Declaration_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitDeclaration_stmt(this);
  else
    return visitor->visitChildren(this);
}

myGrammarParser::Declaration_stmtContext* myGrammarParser::declaration_stmt() {
  Declaration_stmtContext *_localctx = _tracker.createInstance<Declaration_stmtContext>(_ctx, getState());
  enterRule(_localctx, 6, myGrammarParser::RuleDeclaration_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    match(myGrammarParser::KW_LET);
    setState(55);
    antlrcpp::downCast<Declaration_stmtContext *>(_localctx)->name = match(myGrammarParser::ID);
    setState(58);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == myGrammarParser::ASSIGN) {
      setState(56);
      match(myGrammarParser::ASSIGN);
      setState(57);
      antlrcpp::downCast<Declaration_stmtContext *>(_localctx)->value = expr(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_stmtContext ------------------------------------------------------------------

myGrammarParser::Assignment_stmtContext::Assignment_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myGrammarParser::Assignment_stmtContext::ASSIGN() {
  return getToken(myGrammarParser::ASSIGN, 0);
}

tree::TerminalNode* myGrammarParser::Assignment_stmtContext::ID() {
  return getToken(myGrammarParser::ID, 0);
}

myGrammarParser::ExprContext* myGrammarParser::Assignment_stmtContext::expr() {
  return getRuleContext<myGrammarParser::ExprContext>(0);
}


size_t myGrammarParser::Assignment_stmtContext::getRuleIndex() const {
  return myGrammarParser::RuleAssignment_stmt;
}


std::any myGrammarParser::Assignment_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitAssignment_stmt(this);
  else
    return visitor->visitChildren(this);
}

myGrammarParser::Assignment_stmtContext* myGrammarParser::assignment_stmt() {
  Assignment_stmtContext *_localctx = _tracker.createInstance<Assignment_stmtContext>(_ctx, getState());
  enterRule(_localctx, 8, myGrammarParser::RuleAssignment_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    antlrcpp::downCast<Assignment_stmtContext *>(_localctx)->name = match(myGrammarParser::ID);
    setState(61);
    match(myGrammarParser::ASSIGN);
    setState(62);
    antlrcpp::downCast<Assignment_stmtContext *>(_localctx)->value = expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Print_stmtContext ------------------------------------------------------------------

myGrammarParser::Print_stmtContext::Print_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myGrammarParser::Print_stmtContext::KW_PRINT() {
  return getToken(myGrammarParser::KW_PRINT, 0);
}

myGrammarParser::ExprContext* myGrammarParser::Print_stmtContext::expr() {
  return getRuleContext<myGrammarParser::ExprContext>(0);
}


size_t myGrammarParser::Print_stmtContext::getRuleIndex() const {
  return myGrammarParser::RulePrint_stmt;
}


std::any myGrammarParser::Print_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitPrint_stmt(this);
  else
    return visitor->visitChildren(this);
}

myGrammarParser::Print_stmtContext* myGrammarParser::print_stmt() {
  Print_stmtContext *_localctx = _tracker.createInstance<Print_stmtContext>(_ctx, getState());
  enterRule(_localctx, 10, myGrammarParser::RulePrint_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(myGrammarParser::KW_PRINT);
    setState(65);
    antlrcpp::downCast<Print_stmtContext *>(_localctx)->value = expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_stmtContext ------------------------------------------------------------------

myGrammarParser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myGrammarParser::If_stmtContext::KW_IF() {
  return getToken(myGrammarParser::KW_IF, 0);
}

tree::TerminalNode* myGrammarParser::If_stmtContext::LPAREN() {
  return getToken(myGrammarParser::LPAREN, 0);
}

tree::TerminalNode* myGrammarParser::If_stmtContext::RPAREN() {
  return getToken(myGrammarParser::RPAREN, 0);
}

myGrammarParser::ExprContext* myGrammarParser::If_stmtContext::expr() {
  return getRuleContext<myGrammarParser::ExprContext>(0);
}

std::vector<myGrammarParser::Block_stmtContext *> myGrammarParser::If_stmtContext::block_stmt() {
  return getRuleContexts<myGrammarParser::Block_stmtContext>();
}

myGrammarParser::Block_stmtContext* myGrammarParser::If_stmtContext::block_stmt(size_t i) {
  return getRuleContext<myGrammarParser::Block_stmtContext>(i);
}

tree::TerminalNode* myGrammarParser::If_stmtContext::KW_ELSE() {
  return getToken(myGrammarParser::KW_ELSE, 0);
}


size_t myGrammarParser::If_stmtContext::getRuleIndex() const {
  return myGrammarParser::RuleIf_stmt;
}


std::any myGrammarParser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}

myGrammarParser::If_stmtContext* myGrammarParser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 12, myGrammarParser::RuleIf_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    match(myGrammarParser::KW_IF);
    setState(68);
    match(myGrammarParser::LPAREN);
    setState(69);
    antlrcpp::downCast<If_stmtContext *>(_localctx)->condition = expr(0);
    setState(70);
    match(myGrammarParser::RPAREN);
    setState(71);
    antlrcpp::downCast<If_stmtContext *>(_localctx)->thenBlock = block_stmt();
    setState(74);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == myGrammarParser::KW_ELSE) {
      setState(72);
      match(myGrammarParser::KW_ELSE);
      setState(73);
      antlrcpp::downCast<If_stmtContext *>(_localctx)->elseBlock = block_stmt();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_stmtContext ------------------------------------------------------------------

myGrammarParser::While_stmtContext::While_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myGrammarParser::While_stmtContext::KW_WHILE() {
  return getToken(myGrammarParser::KW_WHILE, 0);
}

tree::TerminalNode* myGrammarParser::While_stmtContext::LPAREN() {
  return getToken(myGrammarParser::LPAREN, 0);
}

tree::TerminalNode* myGrammarParser::While_stmtContext::RPAREN() {
  return getToken(myGrammarParser::RPAREN, 0);
}

myGrammarParser::ExprContext* myGrammarParser::While_stmtContext::expr() {
  return getRuleContext<myGrammarParser::ExprContext>(0);
}

myGrammarParser::Block_stmtContext* myGrammarParser::While_stmtContext::block_stmt() {
  return getRuleContext<myGrammarParser::Block_stmtContext>(0);
}


size_t myGrammarParser::While_stmtContext::getRuleIndex() const {
  return myGrammarParser::RuleWhile_stmt;
}


std::any myGrammarParser::While_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitWhile_stmt(this);
  else
    return visitor->visitChildren(this);
}

myGrammarParser::While_stmtContext* myGrammarParser::while_stmt() {
  While_stmtContext *_localctx = _tracker.createInstance<While_stmtContext>(_ctx, getState());
  enterRule(_localctx, 14, myGrammarParser::RuleWhile_stmt);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(myGrammarParser::KW_WHILE);
    setState(77);
    match(myGrammarParser::LPAREN);
    setState(78);
    antlrcpp::downCast<While_stmtContext *>(_localctx)->condition = expr(0);
    setState(79);
    match(myGrammarParser::RPAREN);
    setState(80);
    antlrcpp::downCast<While_stmtContext *>(_localctx)->body = block_stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_decl_stmtContext ------------------------------------------------------------------

myGrammarParser::Func_decl_stmtContext::Func_decl_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myGrammarParser::Func_decl_stmtContext::KW_FUNC() {
  return getToken(myGrammarParser::KW_FUNC, 0);
}

tree::TerminalNode* myGrammarParser::Func_decl_stmtContext::LPAREN() {
  return getToken(myGrammarParser::LPAREN, 0);
}

tree::TerminalNode* myGrammarParser::Func_decl_stmtContext::RPAREN() {
  return getToken(myGrammarParser::RPAREN, 0);
}

std::vector<tree::TerminalNode *> myGrammarParser::Func_decl_stmtContext::ID() {
  return getTokens(myGrammarParser::ID);
}

tree::TerminalNode* myGrammarParser::Func_decl_stmtContext::ID(size_t i) {
  return getToken(myGrammarParser::ID, i);
}

myGrammarParser::Block_stmtContext* myGrammarParser::Func_decl_stmtContext::block_stmt() {
  return getRuleContext<myGrammarParser::Block_stmtContext>(0);
}

std::vector<tree::TerminalNode *> myGrammarParser::Func_decl_stmtContext::COMMA() {
  return getTokens(myGrammarParser::COMMA);
}

tree::TerminalNode* myGrammarParser::Func_decl_stmtContext::COMMA(size_t i) {
  return getToken(myGrammarParser::COMMA, i);
}


size_t myGrammarParser::Func_decl_stmtContext::getRuleIndex() const {
  return myGrammarParser::RuleFunc_decl_stmt;
}


std::any myGrammarParser::Func_decl_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitFunc_decl_stmt(this);
  else
    return visitor->visitChildren(this);
}

myGrammarParser::Func_decl_stmtContext* myGrammarParser::func_decl_stmt() {
  Func_decl_stmtContext *_localctx = _tracker.createInstance<Func_decl_stmtContext>(_ctx, getState());
  enterRule(_localctx, 16, myGrammarParser::RuleFunc_decl_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(myGrammarParser::KW_FUNC);
    setState(83);
    antlrcpp::downCast<Func_decl_stmtContext *>(_localctx)->name = match(myGrammarParser::ID);
    setState(84);
    match(myGrammarParser::LPAREN);
    setState(93);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == myGrammarParser::ID) {
      setState(85);
      antlrcpp::downCast<Func_decl_stmtContext *>(_localctx)->idToken = match(myGrammarParser::ID);
      antlrcpp::downCast<Func_decl_stmtContext *>(_localctx)->params.push_back(antlrcpp::downCast<Func_decl_stmtContext *>(_localctx)->idToken);
      setState(90);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == myGrammarParser::COMMA) {
        setState(86);
        match(myGrammarParser::COMMA);
        setState(87);
        antlrcpp::downCast<Func_decl_stmtContext *>(_localctx)->idToken = match(myGrammarParser::ID);
        antlrcpp::downCast<Func_decl_stmtContext *>(_localctx)->params.push_back(antlrcpp::downCast<Func_decl_stmtContext *>(_localctx)->idToken);
        setState(92);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(95);
    match(myGrammarParser::RPAREN);
    setState(96);
    antlrcpp::downCast<Func_decl_stmtContext *>(_localctx)->body = block_stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_stmtContext ------------------------------------------------------------------

myGrammarParser::Return_stmtContext::Return_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* myGrammarParser::Return_stmtContext::KW_RETURN() {
  return getToken(myGrammarParser::KW_RETURN, 0);
}

myGrammarParser::ExprContext* myGrammarParser::Return_stmtContext::expr() {
  return getRuleContext<myGrammarParser::ExprContext>(0);
}


size_t myGrammarParser::Return_stmtContext::getRuleIndex() const {
  return myGrammarParser::RuleReturn_stmt;
}


std::any myGrammarParser::Return_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitReturn_stmt(this);
  else
    return visitor->visitChildren(this);
}

myGrammarParser::Return_stmtContext* myGrammarParser::return_stmt() {
  Return_stmtContext *_localctx = _tracker.createInstance<Return_stmtContext>(_ctx, getState());
  enterRule(_localctx, 18, myGrammarParser::RuleReturn_stmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    match(myGrammarParser::KW_RETURN);
    setState(100);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 68719726080) != 0)) {
      setState(99);
      antlrcpp::downCast<Return_stmtContext *>(_localctx)->value = expr(0);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

myGrammarParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t myGrammarParser::ExprContext::getRuleIndex() const {
  return myGrammarParser::RuleExpr;
}

void myGrammarParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- NullContext ------------------------------------------------------------------

tree::TerminalNode* myGrammarParser::NullContext::KW_NULL() {
  return getToken(myGrammarParser::KW_NULL, 0);
}

myGrammarParser::NullContext::NullContext(ExprContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::NullContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitNull(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

std::vector<myGrammarParser::ExprContext *> myGrammarParser::AddSubContext::expr() {
  return getRuleContexts<myGrammarParser::ExprContext>();
}

myGrammarParser::ExprContext* myGrammarParser::AddSubContext::expr(size_t i) {
  return getRuleContext<myGrammarParser::ExprContext>(i);
}

tree::TerminalNode* myGrammarParser::AddSubContext::ADD() {
  return getToken(myGrammarParser::ADD, 0);
}

tree::TerminalNode* myGrammarParser::AddSubContext::SUB() {
  return getToken(myGrammarParser::SUB, 0);
}

myGrammarParser::AddSubContext::AddSubContext(ExprContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::AddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<myGrammarParser::ExprContext *> myGrammarParser::MulDivContext::expr() {
  return getRuleContexts<myGrammarParser::ExprContext>();
}

myGrammarParser::ExprContext* myGrammarParser::MulDivContext::expr(size_t i) {
  return getRuleContext<myGrammarParser::ExprContext>(i);
}

tree::TerminalNode* myGrammarParser::MulDivContext::MUL() {
  return getToken(myGrammarParser::MUL, 0);
}

tree::TerminalNode* myGrammarParser::MulDivContext::DIV() {
  return getToken(myGrammarParser::DIV, 0);
}

myGrammarParser::MulDivContext::MulDivContext(ExprContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParensContext ------------------------------------------------------------------

tree::TerminalNode* myGrammarParser::ParensContext::LPAREN() {
  return getToken(myGrammarParser::LPAREN, 0);
}

myGrammarParser::ExprContext* myGrammarParser::ParensContext::expr() {
  return getRuleContext<myGrammarParser::ExprContext>(0);
}

tree::TerminalNode* myGrammarParser::ParensContext::RPAREN() {
  return getToken(myGrammarParser::RPAREN, 0);
}

myGrammarParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::ParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelationalContext ------------------------------------------------------------------

std::vector<myGrammarParser::ExprContext *> myGrammarParser::RelationalContext::expr() {
  return getRuleContexts<myGrammarParser::ExprContext>();
}

myGrammarParser::ExprContext* myGrammarParser::RelationalContext::expr(size_t i) {
  return getRuleContext<myGrammarParser::ExprContext>(i);
}

tree::TerminalNode* myGrammarParser::RelationalContext::LT() {
  return getToken(myGrammarParser::LT, 0);
}

tree::TerminalNode* myGrammarParser::RelationalContext::LE() {
  return getToken(myGrammarParser::LE, 0);
}

tree::TerminalNode* myGrammarParser::RelationalContext::GT() {
  return getToken(myGrammarParser::GT, 0);
}

tree::TerminalNode* myGrammarParser::RelationalContext::GE() {
  return getToken(myGrammarParser::GE, 0);
}

myGrammarParser::RelationalContext::RelationalContext(ExprContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::RelationalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitRelational(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TrueContext ------------------------------------------------------------------

tree::TerminalNode* myGrammarParser::TrueContext::KW_TRUE() {
  return getToken(myGrammarParser::KW_TRUE, 0);
}

myGrammarParser::TrueContext::TrueContext(ExprContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::TrueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitTrue(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringContext ------------------------------------------------------------------

tree::TerminalNode* myGrammarParser::StringContext::STRING() {
  return getToken(myGrammarParser::STRING, 0);
}

myGrammarParser::StringContext::StringContext(ExprContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FalseContext ------------------------------------------------------------------

tree::TerminalNode* myGrammarParser::FalseContext::KW_FALSE() {
  return getToken(myGrammarParser::KW_FALSE, 0);
}

myGrammarParser::FalseContext::FalseContext(ExprContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::FalseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitFalse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalOrContext ------------------------------------------------------------------

std::vector<myGrammarParser::ExprContext *> myGrammarParser::LogicalOrContext::expr() {
  return getRuleContexts<myGrammarParser::ExprContext>();
}

myGrammarParser::ExprContext* myGrammarParser::LogicalOrContext::expr(size_t i) {
  return getRuleContext<myGrammarParser::ExprContext>(i);
}

tree::TerminalNode* myGrammarParser::LogicalOrContext::OR() {
  return getToken(myGrammarParser::OR, 0);
}

myGrammarParser::LogicalOrContext::LogicalOrContext(ExprContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::LogicalOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitLogicalOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncCallContext ------------------------------------------------------------------

tree::TerminalNode* myGrammarParser::FuncCallContext::LPAREN() {
  return getToken(myGrammarParser::LPAREN, 0);
}

tree::TerminalNode* myGrammarParser::FuncCallContext::RPAREN() {
  return getToken(myGrammarParser::RPAREN, 0);
}

tree::TerminalNode* myGrammarParser::FuncCallContext::ID() {
  return getToken(myGrammarParser::ID, 0);
}

std::vector<myGrammarParser::ExprContext *> myGrammarParser::FuncCallContext::expr() {
  return getRuleContexts<myGrammarParser::ExprContext>();
}

myGrammarParser::ExprContext* myGrammarParser::FuncCallContext::expr(size_t i) {
  return getRuleContext<myGrammarParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> myGrammarParser::FuncCallContext::COMMA() {
  return getTokens(myGrammarParser::COMMA);
}

tree::TerminalNode* myGrammarParser::FuncCallContext::COMMA(size_t i) {
  return getToken(myGrammarParser::COMMA, i);
}

myGrammarParser::FuncCallContext::FuncCallContext(ExprContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::FuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitFuncCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberContext ------------------------------------------------------------------

tree::TerminalNode* myGrammarParser::NumberContext::NUMBER() {
  return getToken(myGrammarParser::NUMBER, 0);
}

myGrammarParser::NumberContext::NumberContext(ExprContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicalAndContext ------------------------------------------------------------------

std::vector<myGrammarParser::ExprContext *> myGrammarParser::LogicalAndContext::expr() {
  return getRuleContexts<myGrammarParser::ExprContext>();
}

myGrammarParser::ExprContext* myGrammarParser::LogicalAndContext::expr(size_t i) {
  return getRuleContext<myGrammarParser::ExprContext>(i);
}

tree::TerminalNode* myGrammarParser::LogicalAndContext::AND() {
  return getToken(myGrammarParser::AND, 0);
}

myGrammarParser::LogicalAndContext::LogicalAndContext(ExprContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::LogicalAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitLogicalAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotExprContext ------------------------------------------------------------------

tree::TerminalNode* myGrammarParser::NotExprContext::NOT() {
  return getToken(myGrammarParser::NOT, 0);
}

myGrammarParser::ExprContext* myGrammarParser::NotExprContext::expr() {
  return getRuleContext<myGrammarParser::ExprContext>(0);
}

myGrammarParser::NotExprContext::NotExprContext(ExprContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::NotExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitNotExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdContext ------------------------------------------------------------------

tree::TerminalNode* myGrammarParser::IdContext::ID() {
  return getToken(myGrammarParser::ID, 0);
}

myGrammarParser::IdContext::IdContext(ExprContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualityContext ------------------------------------------------------------------

std::vector<myGrammarParser::ExprContext *> myGrammarParser::EqualityContext::expr() {
  return getRuleContexts<myGrammarParser::ExprContext>();
}

myGrammarParser::ExprContext* myGrammarParser::EqualityContext::expr(size_t i) {
  return getRuleContext<myGrammarParser::ExprContext>(i);
}

tree::TerminalNode* myGrammarParser::EqualityContext::EQ() {
  return getToken(myGrammarParser::EQ, 0);
}

tree::TerminalNode* myGrammarParser::EqualityContext::NEQ() {
  return getToken(myGrammarParser::NEQ, 0);
}

myGrammarParser::EqualityContext::EqualityContext(ExprContext *ctx) { copyFrom(ctx); }


std::any myGrammarParser::EqualityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<myGrammarVisitor*>(visitor))
    return parserVisitor->visitEquality(this);
  else
    return visitor->visitChildren(this);
}

myGrammarParser::ExprContext* myGrammarParser::expr() {
   return expr(0);
}

myGrammarParser::ExprContext* myGrammarParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  myGrammarParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  myGrammarParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, myGrammarParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(128);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<NotExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(103);
      match(myGrammarParser::NOT);
      setState(104);
      expr(13);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<FuncCallContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(105);
      antlrcpp::downCast<FuncCallContext *>(_localctx)->name = match(myGrammarParser::ID);
      setState(106);
      match(myGrammarParser::LPAREN);
      setState(115);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 68719726080) != 0)) {
        setState(107);
        antlrcpp::downCast<FuncCallContext *>(_localctx)->exprContext = expr(0);
        antlrcpp::downCast<FuncCallContext *>(_localctx)->args.push_back(antlrcpp::downCast<FuncCallContext *>(_localctx)->exprContext);
        setState(112);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == myGrammarParser::COMMA) {
          setState(108);
          match(myGrammarParser::COMMA);
          setState(109);
          antlrcpp::downCast<FuncCallContext *>(_localctx)->exprContext = expr(0);
          antlrcpp::downCast<FuncCallContext *>(_localctx)->args.push_back(antlrcpp::downCast<FuncCallContext *>(_localctx)->exprContext);
          setState(114);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(117);
      match(myGrammarParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<IdContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(118);
      antlrcpp::downCast<IdContext *>(_localctx)->name = match(myGrammarParser::ID);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<NumberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(119);
      match(myGrammarParser::NUMBER);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<StringContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(120);
      match(myGrammarParser::STRING);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<TrueContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(121);
      match(myGrammarParser::KW_TRUE);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<FalseContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(122);
      match(myGrammarParser::KW_FALSE);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<NullContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(123);
      match(myGrammarParser::KW_NULL);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<ParensContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(124);
      match(myGrammarParser::LPAREN);
      setState(125);
      expr(0);
      setState(126);
      match(myGrammarParser::RPAREN);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(150);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(148);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<LogicalOrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(130);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(131);
          antlrcpp::downCast<LogicalOrContext *>(_localctx)->op = match(myGrammarParser::OR);
          setState(132);
          expr(16);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<LogicalAndContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(133);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(134);
          antlrcpp::downCast<LogicalAndContext *>(_localctx)->op = match(myGrammarParser::AND);
          setState(135);
          expr(15);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<EqualityContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(136);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(137);
          antlrcpp::downCast<EqualityContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == myGrammarParser::EQ

          || _la == myGrammarParser::NEQ)) {
            antlrcpp::downCast<EqualityContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(138);
          expr(13);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<RelationalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(139);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(140);
          antlrcpp::downCast<RelationalContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 16106127360) != 0))) {
            antlrcpp::downCast<RelationalContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(141);
          expr(12);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(142);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(143);
          antlrcpp::downCast<AddSubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == myGrammarParser::ADD

          || _la == myGrammarParser::SUB)) {
            antlrcpp::downCast<AddSubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(144);
          expr(11);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(145);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(146);
          antlrcpp::downCast<MulDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == myGrammarParser::MUL

          || _la == myGrammarParser::DIV)) {
            antlrcpp::downCast<MulDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(147);
          expr(10);
          break;
        }

        default:
          break;
        } 
      }
      setState(152);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool myGrammarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 10: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool myGrammarParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 15);
    case 1: return precpred(_ctx, 14);
    case 2: return precpred(_ctx, 12);
    case 3: return precpred(_ctx, 11);
    case 4: return precpred(_ctx, 10);
    case 5: return precpred(_ctx, 9);

  default:
    break;
  }
  return true;
}

void myGrammarParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mygrammarParserInitialize();
#else
  ::antlr4::internal::call_once(mygrammarParserOnceFlag, mygrammarParserInitialize);
#endif
}
