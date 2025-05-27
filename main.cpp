#include "antlr4-runtime.h"              
#include "generated/myGrammarLexer.h"   
#include "generated/myGrammarParser.h"   
#include "MyInterpreterVisitor.h"       

#include <iostream>
#include <string>
#include <fstream>       
#include <sstream>        

int main(int argc, const char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " \"<code>\" or " << argv[0] << " <file.mylang>" << std::endl;
        return 1;
    }

    std::string input_string;

    if (argc == 2 && argv[1][0] != '-' && !std::ifstream(argv[1]).good()) {
        input_string = argv[1];
    }
    else {
        std::ifstream file_stream;
        std::string file_path;

        if (argc == 2) {     
            file_path = argv[1];
        }
        else if (argc == 3 && std::string(argv[1]) == "-f") {    
            file_path = argv[2];
        }
        else {
            std::cerr << "Error: Invalid arguments." << std::endl;
            std::cerr << "Usage: " << argv[0] << " \"<code>\" or " << argv[0] << " <file.mylang>" << std::endl;
            return 1;
        }

        file_stream.open(file_path);
        if (!file_stream.is_open()) {
            std::cerr << "Error: Could not open file '" << file_path << "'" << std::endl;
            return 1;
        }
        std::stringstream buffer;
        buffer << file_stream.rdbuf();
        input_string = buffer.str();
    }


    antlr4::ANTLRInputStream input(input_string);

    myGrammarLexer lexer(&input);

    antlr4::CommonTokenStream tokens(&lexer);

    myGrammarParser parser(&tokens);

    myGrammarParser::ProgContext* tree = parser.prog();

    MyInterpreterVisitor visitor;

    try {
        visitor.visit(tree);
        std::cout << "Program finished successfully." << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << "Runtime Error: " << e.what() << std::endl;
        return 1;    
    }

    return 0;     
}