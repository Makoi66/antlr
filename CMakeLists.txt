cmake_minimum_required(VERSION 3.12)
project(MyLangInterpreter CXX)

set(CMAKE_CXX_STANDARD 17)

set(ANTLR4_VCPKG_INSTALL_ROOT "D:/Projects_C++/antlr/vcpkg/installed/x64-windows")

include_directories(${ANTLR4_VCPKG_INSTALL_ROOT}/include/antlr4-runtime)

link_directories(${ANTLR4_VCPKG_INSTALL_ROOT}/lib)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/generated)

find_package(antlr4 CONFIG REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/generated)

add_executable(${PROJECT_NAME}
    main.cpp
    MyInterpreterVisitor.h
)

target_sources(${PROJECT_NAME} PRIVATE
    generated/myGrammarLexer.cpp
    generated/myGrammarParser.cpp
    generated/myGrammarBaseVisitor.cpp
)


target_link_libraries(${PROJECT_NAME} PRIVATE antlr4-runtime)