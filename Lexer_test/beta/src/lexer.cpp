#include <vector>
#include <string>
#include <deque>
#include "lexer.hpp"

enum TokenTypes {
    IntLiteral,
    FloatLiteral,
    IdentifierColon,
    Identifier,
    OperatorEqual,
    OperatorLessThan,
    OperatorGreaterThan,
    OpeningParenthesis,
    ClosingParenthesis,
    KeywordIf,
    KeywordElse,
    KeywordWhile,
    KeywordFor,
    KeywordReturn,
    EndStatement,
};

struct Token {
    TokenTypes type;
    std::string value;
};

std::vector<std::string> splitString(const std::string &source) {
    std::vector<std::string> words;
    std::string word;

    for (char ch : source) {
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

void shift(std::vector<std::string> &src) {
    std::string first = src.front();

    if (!src.empty()) {
        src.erase(src.begin());
    } 
}


std::vector<Token> tokenize(const std::string& source) {
    std::vector<Token> tokens;
    std::vector<std::string> src = splitString(source);
    
    while(!src.empty()) {
        if (src.front() == "if") {
            tokens.push_back({KeywordIf, "if"});
        } else if (src.front() == "else") {
            tokens.push_back({KeywordElse, "else"});
        } else if (src.front() == "while") {
            tokens.push_back({KeywordWhile, "while"});
        } else if (src.front() == "for") {
            tokens.push_back({KeywordFor, "for"});
        } else if (src.front() == "return") {
            tokens.push_back({KeywordReturn, "return"});
        } else if (src.front() == "=") {
            tokens.push_back({OperatorEqual, "="});
        } else if (src.front() == "<") {
            tokens.push_back({OperatorLessThan, "<"});
        } else if (src.front() == ">") {
            tokens.push_back({OperatorGreaterThan, ">"});
        } else if (src.front() == "(") {
            tokens.push_back({OpeningParenthesis, "("});
        } else if (src.front() == ")") {
            tokens.push_back({ClosingParenthesis, ")"});
        } else if (!src.front().empty() && std::isdigit(src.front()[0])) {
            if (src.front().find('.') != std::string::npos) {
                tokens.push_back({FloatLiteral, src.front()});
            } else {
                tokens.push_back({IntLiteral, src.front()});
            }
        } else if (!src.front().empty()) {
            if (src.front().back() == ':') {
                tokens.push_back({IdentifierColon, src.front().substr(0, src.front().size() - 1)});
            } else {
                tokens.push_back({Identifier, src.front()});
            }
        }
        shift(src);
    }

    return tokens;
}