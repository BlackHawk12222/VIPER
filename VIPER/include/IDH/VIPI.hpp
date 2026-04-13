#ifndef VIPI_HPP
#define VIPI_HPP

#include <string>
#include <vector>
#include <map>
#include "main.h"
#include "IDH/Lexar.hpp"

class Syntax{
    public:
        bool check_syntax(std::string Word);
        std::map<std::string, TokenTypes> list_syntax();
        void tank_drive(pros::Controller Controller, std::vector<pros::Motor> LeftMotors, std::vector<pros::Motor> RightMotors);
        

    private:
        const std::map<std::string, TokenTypes> SyntaxMap {
            {"if", TokenTypes::KeyWordIf},
            {"for", TokenTypes::KeyWordFor},
            {"while", TokenTypes::KeyWordWhile},
            {"wait", TokenTypes::KeyWordWait},
            {"until", TokenTypes::KeywordUntil},
            {"and", TokenTypes::LogicalAnd},
            {"or", TokenTypes::LogicalOr},
            {"xor", TokenTypes::LogicalXor},
            {"not", TokenTypes::LogicalNot},
            {"is", TokenTypes::LogicalIs},
            {"in", TokenTypes::LogicalIn},
            {"int", TokenTypes::TypeInt},
            {"float", TokenTypes::TypeFloat},
            {"double", TokenTypes::TypeDouble},
            {"string", TokenTypes::TypeString},
            {"list", TokenTypes::TypeList},
            {"dict", TokenTypes::TypeDict},
            {"set", TokenTypes::TypeSet},
        };
};
#endif  // Generator_HPP