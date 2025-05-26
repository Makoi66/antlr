
// Generated from myGrammar.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  myGrammarLexer : public antlr4::Lexer {
public:
  enum {
    WS = 1, LINE_COMMENT = 2, BLOCK_COMMENT = 3, KW_LET = 4, KW_IF = 5, 
    KW_ELSE = 6, KW_WHILE = 7, KW_PRINT = 8, KW_TRUE = 9, KW_FALSE = 10, 
    KW_NULL = 11, KW_FUNC = 12, KW_RETURN = 13, NUMBER = 14, STRING = 15, 
    ID = 16, LPAREN = 17, RPAREN = 18, LBRACE = 19, RBRACE = 20, COMMA = 21, 
    SEMICOLON = 22, ASSIGN = 23, ADD = 24, SUB = 25, MUL = 26, DIV = 27, 
    EQ = 28, NEQ = 29, LT = 30, LE = 31, GT = 32, GE = 33, AND = 34, OR = 35, 
    NOT = 36
  };

  explicit myGrammarLexer(antlr4::CharStream *input);

  ~myGrammarLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

