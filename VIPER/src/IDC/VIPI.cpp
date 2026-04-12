#include <vector>
#include <string>
#include "IDH/VIPI.hpp"
#include "IDH/Lexar.hpp"

bool Syntax::check_syntax(std::string Word){
    std::vector<std::string> words {Word, ""};
    Lexar* lexar;
    lexar->Tokenize(words);
    return true;
}