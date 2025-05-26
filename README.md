# antlr

generated: java -jar antlr-4.13.2-complete.jar -no-listener -visitor -Dlanguage=Cpp myGrammar.g4 -o generated

cmake: cmake .. -DCMAKE_TOOLCHAIN_FILE="D:/Projects_C++/antlr/vcpkg/scripts/buildsystems/vcpkg.cmake" -A x64

using: cd D:\Projects_C++\antlr\build\Debug\MyLangInterpreter.exe test.mylang
