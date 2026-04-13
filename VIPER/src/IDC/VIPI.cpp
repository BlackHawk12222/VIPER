#include <vector>
#include <string>
#include <map>
#include "IDH/VIPI.hpp"
#include "IDH/Lexar.hpp"

bool Syntax::check_syntax(std::string Word){
    std::vector<std::string> words {Word};
    Lexar* lexar;
    std::vector<Lexar::Token> output=lexar->Tokenize(words);
    if (output[0].Type != TokenTypes::Unknown){
        return true;
    }else{
        return false;
    }
}

std::map<std::string, TokenTypes> Syntax::list_syntax(){
    return Syntax::SyntaxMap;
}