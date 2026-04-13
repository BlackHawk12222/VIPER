#include <string>
#include "IDH/Lexar.hpp"

std::vector<std::string> Lexar::split_code(std::string Code){
    std::vector<std::string> words;
    std::string word;

    for (char ch : Code) {
        if (ch != ' ') {
            word += ch;
        } else if (!word.empty()) {
            words.push_back(word);
            word.clear();
        }
    }

    if (!word.empty()) {
        words.push_back(word);
    }

    return words;
}

std::vector<Lexar::Token> Lexar::Tokenize(std::vector<std::string> CodeList){
    std::vector<Lexar::Token> TokenList;
    return TokenList;
}