#ifndef Lexar_HPP
#define Lexar_HPP

#include <vector>
#include <string>


class Lexar{
    private:
        enum TokenTypes{ 
        IDTypeVari,
        IDTypeFunc,
        EndStatement,
        OpenPer,
        ClosePer,
        OpenBraket,
        CloseBraket,
        InterCall,
        CppCall,
        CCall,
        ByteCall,
        ExecCall,
        EvalCall,
        KeyWordIf,
        KeyWordFor,
        KeyWordWhile,
        KewWordReturn,
        KeyWordWait,
        KeywordUntil,
        Container,
        CompareGreater,
        CompareLessThan,
        CompareEqual,
        CompareGreaterEqual,
        CompareLessThanEqual,
        LogicalAnd,
        LogicalOr,
        LogicalNot,
        LogicalXor,
        LogicalIn,
        LogicalIs,
        LiteralInt,
        Literalfloat,
        LiteralDouble,
        LiteralString,
        LiteralChar,
        TypeInt,
        TypeFloat,
        TypeDouble,
        TypeString,
        TypeChar,
        TypeList,
        TypeDict,
        TypeSet,
        TypeNull,
        BoolTrue,
        BoolFalse,
        Unknown
        };
    public:
        struct Token
        {
            TokenTypes Type;
            std::string Indenifier;
        };
        std::vector<std::string> split_code(std::string Code);
        std::vector<Lexar::Token> Tokenize(std::vector<std::string> CodeList);
};
#endif  // Lexar_HPP