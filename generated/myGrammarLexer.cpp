
// Generated from myGrammar.g4 by ANTLR 4.13.2


#include "myGrammarLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct MyGrammarLexerStaticData final {
  MyGrammarLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MyGrammarLexerStaticData(const MyGrammarLexerStaticData&) = delete;
  MyGrammarLexerStaticData(MyGrammarLexerStaticData&&) = delete;
  MyGrammarLexerStaticData& operator=(const MyGrammarLexerStaticData&) = delete;
  MyGrammarLexerStaticData& operator=(MyGrammarLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mygrammarlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<MyGrammarLexerStaticData> mygrammarlexerLexerStaticData = nullptr;

void mygrammarlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mygrammarlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(mygrammarlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MyGrammarLexerStaticData>(
    std::vector<std::string>{
      "WS", "LINE_COMMENT", "BLOCK_COMMENT", "KW_LET", "KW_IF", "KW_ELSE", 
      "KW_WHILE", "KW_PRINT", "KW_TRUE", "KW_FALSE", "KW_NULL", "KW_FUNC", 
      "KW_RETURN", "NUMBER", "STRING", "ESC", "ID", "LPAREN", "RPAREN", 
      "LBRACE", "RBRACE", "COMMA", "SEMICOLON", "ASSIGN", "ADD", "SUB", 
      "MUL", "DIV", "EQ", "NEQ", "LT", "LE", "GT", "GE", "AND", "OR", "NOT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,36,241,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,1,0,4,0,77,8,0,11,0,12,0,78,1,0,1,0,1,1,1,1,1,1,1,1,5,
  	1,87,8,1,10,1,12,1,90,9,1,1,1,1,1,1,2,1,2,1,2,1,2,5,2,98,8,2,10,2,12,
  	2,101,9,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,5,1,5,1,5,
  	1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,
  	8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,11,1,11,1,11,
  	1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,13,4,13,161,8,13,11,13,
  	12,13,162,1,14,1,14,1,14,5,14,168,8,14,10,14,12,14,171,9,14,1,14,1,14,
  	1,15,1,15,1,15,1,16,1,16,5,16,180,8,16,10,16,12,16,183,9,16,1,17,1,17,
  	1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,
  	1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,28,1,29,1,29,1,29,1,30,1,30,
  	1,31,1,31,1,31,1,32,1,32,1,33,1,33,1,33,1,34,1,34,1,34,1,34,1,34,3,34,
  	228,8,34,1,35,1,35,1,35,1,35,3,35,234,8,35,1,36,1,36,1,36,1,36,3,36,240,
  	8,36,1,99,0,37,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,
  	12,25,13,27,14,29,15,31,0,33,16,35,17,37,18,39,19,41,20,43,21,45,22,47,
  	23,49,24,51,25,53,26,55,27,57,28,59,29,61,30,63,31,65,32,67,33,69,34,
  	71,35,73,36,1,0,7,3,0,9,10,13,13,32,32,2,0,10,10,13,13,1,0,48,57,2,0,
  	34,34,92,92,8,0,34,34,39,39,92,92,98,98,102,102,110,110,114,114,116,116,
  	3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,249,0,1,1,0,0,0,0,
  	3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,
  	0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,
  	25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,
  	0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,
  	0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,
  	59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,
  	0,0,0,0,71,1,0,0,0,0,73,1,0,0,0,1,76,1,0,0,0,3,82,1,0,0,0,5,93,1,0,0,
  	0,7,107,1,0,0,0,9,111,1,0,0,0,11,114,1,0,0,0,13,119,1,0,0,0,15,125,1,
  	0,0,0,17,131,1,0,0,0,19,136,1,0,0,0,21,142,1,0,0,0,23,147,1,0,0,0,25,
  	152,1,0,0,0,27,160,1,0,0,0,29,164,1,0,0,0,31,174,1,0,0,0,33,177,1,0,0,
  	0,35,184,1,0,0,0,37,186,1,0,0,0,39,188,1,0,0,0,41,190,1,0,0,0,43,192,
  	1,0,0,0,45,194,1,0,0,0,47,196,1,0,0,0,49,198,1,0,0,0,51,200,1,0,0,0,53,
  	202,1,0,0,0,55,204,1,0,0,0,57,206,1,0,0,0,59,209,1,0,0,0,61,212,1,0,0,
  	0,63,214,1,0,0,0,65,217,1,0,0,0,67,219,1,0,0,0,69,227,1,0,0,0,71,233,
  	1,0,0,0,73,239,1,0,0,0,75,77,7,0,0,0,76,75,1,0,0,0,77,78,1,0,0,0,78,76,
  	1,0,0,0,78,79,1,0,0,0,79,80,1,0,0,0,80,81,6,0,0,0,81,2,1,0,0,0,82,83,
  	5,47,0,0,83,84,5,47,0,0,84,88,1,0,0,0,85,87,8,1,0,0,86,85,1,0,0,0,87,
  	90,1,0,0,0,88,86,1,0,0,0,88,89,1,0,0,0,89,91,1,0,0,0,90,88,1,0,0,0,91,
  	92,6,1,0,0,92,4,1,0,0,0,93,94,5,47,0,0,94,95,5,42,0,0,95,99,1,0,0,0,96,
  	98,9,0,0,0,97,96,1,0,0,0,98,101,1,0,0,0,99,100,1,0,0,0,99,97,1,0,0,0,
  	100,102,1,0,0,0,101,99,1,0,0,0,102,103,5,42,0,0,103,104,5,47,0,0,104,
  	105,1,0,0,0,105,106,6,2,0,0,106,6,1,0,0,0,107,108,5,108,0,0,108,109,5,
  	101,0,0,109,110,5,116,0,0,110,8,1,0,0,0,111,112,5,105,0,0,112,113,5,102,
  	0,0,113,10,1,0,0,0,114,115,5,101,0,0,115,116,5,108,0,0,116,117,5,115,
  	0,0,117,118,5,101,0,0,118,12,1,0,0,0,119,120,5,119,0,0,120,121,5,104,
  	0,0,121,122,5,105,0,0,122,123,5,108,0,0,123,124,5,101,0,0,124,14,1,0,
  	0,0,125,126,5,112,0,0,126,127,5,114,0,0,127,128,5,105,0,0,128,129,5,110,
  	0,0,129,130,5,116,0,0,130,16,1,0,0,0,131,132,5,116,0,0,132,133,5,114,
  	0,0,133,134,5,117,0,0,134,135,5,101,0,0,135,18,1,0,0,0,136,137,5,102,
  	0,0,137,138,5,97,0,0,138,139,5,108,0,0,139,140,5,115,0,0,140,141,5,101,
  	0,0,141,20,1,0,0,0,142,143,5,110,0,0,143,144,5,117,0,0,144,145,5,108,
  	0,0,145,146,5,108,0,0,146,22,1,0,0,0,147,148,5,102,0,0,148,149,5,117,
  	0,0,149,150,5,110,0,0,150,151,5,99,0,0,151,24,1,0,0,0,152,153,5,114,0,
  	0,153,154,5,101,0,0,154,155,5,116,0,0,155,156,5,117,0,0,156,157,5,114,
  	0,0,157,158,5,110,0,0,158,26,1,0,0,0,159,161,7,2,0,0,160,159,1,0,0,0,
  	161,162,1,0,0,0,162,160,1,0,0,0,162,163,1,0,0,0,163,28,1,0,0,0,164,169,
  	5,34,0,0,165,168,3,31,15,0,166,168,8,3,0,0,167,165,1,0,0,0,167,166,1,
  	0,0,0,168,171,1,0,0,0,169,167,1,0,0,0,169,170,1,0,0,0,170,172,1,0,0,0,
  	171,169,1,0,0,0,172,173,5,34,0,0,173,30,1,0,0,0,174,175,5,92,0,0,175,
  	176,7,4,0,0,176,32,1,0,0,0,177,181,7,5,0,0,178,180,7,6,0,0,179,178,1,
  	0,0,0,180,183,1,0,0,0,181,179,1,0,0,0,181,182,1,0,0,0,182,34,1,0,0,0,
  	183,181,1,0,0,0,184,185,5,40,0,0,185,36,1,0,0,0,186,187,5,41,0,0,187,
  	38,1,0,0,0,188,189,5,123,0,0,189,40,1,0,0,0,190,191,5,125,0,0,191,42,
  	1,0,0,0,192,193,5,44,0,0,193,44,1,0,0,0,194,195,5,59,0,0,195,46,1,0,0,
  	0,196,197,5,61,0,0,197,48,1,0,0,0,198,199,5,43,0,0,199,50,1,0,0,0,200,
  	201,5,45,0,0,201,52,1,0,0,0,202,203,5,42,0,0,203,54,1,0,0,0,204,205,5,
  	47,0,0,205,56,1,0,0,0,206,207,5,61,0,0,207,208,5,61,0,0,208,58,1,0,0,
  	0,209,210,5,33,0,0,210,211,5,61,0,0,211,60,1,0,0,0,212,213,5,60,0,0,213,
  	62,1,0,0,0,214,215,5,60,0,0,215,216,5,61,0,0,216,64,1,0,0,0,217,218,5,
  	62,0,0,218,66,1,0,0,0,219,220,5,62,0,0,220,221,5,61,0,0,221,68,1,0,0,
  	0,222,223,5,38,0,0,223,228,5,38,0,0,224,225,5,97,0,0,225,226,5,110,0,
  	0,226,228,5,100,0,0,227,222,1,0,0,0,227,224,1,0,0,0,228,70,1,0,0,0,229,
  	230,5,124,0,0,230,234,5,124,0,0,231,232,5,111,0,0,232,234,5,114,0,0,233,
  	229,1,0,0,0,233,231,1,0,0,0,234,72,1,0,0,0,235,240,5,33,0,0,236,237,5,
  	110,0,0,237,238,5,111,0,0,238,240,5,116,0,0,239,235,1,0,0,0,239,236,1,
  	0,0,0,240,74,1,0,0,0,11,0,78,88,99,162,167,169,181,227,233,239,1,6,0,
  	0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mygrammarlexerLexerStaticData = std::move(staticData);
}

}

myGrammarLexer::myGrammarLexer(CharStream *input) : Lexer(input) {
  myGrammarLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *mygrammarlexerLexerStaticData->atn, mygrammarlexerLexerStaticData->decisionToDFA, mygrammarlexerLexerStaticData->sharedContextCache);
}

myGrammarLexer::~myGrammarLexer() {
  delete _interpreter;
}

std::string myGrammarLexer::getGrammarFileName() const {
  return "myGrammar.g4";
}

const std::vector<std::string>& myGrammarLexer::getRuleNames() const {
  return mygrammarlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& myGrammarLexer::getChannelNames() const {
  return mygrammarlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& myGrammarLexer::getModeNames() const {
  return mygrammarlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& myGrammarLexer::getVocabulary() const {
  return mygrammarlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView myGrammarLexer::getSerializedATN() const {
  return mygrammarlexerLexerStaticData->serializedATN;
}

const atn::ATN& myGrammarLexer::getATN() const {
  return *mygrammarlexerLexerStaticData->atn;
}




void myGrammarLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mygrammarlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(mygrammarlexerLexerOnceFlag, mygrammarlexerLexerInitialize);
#endif
}
