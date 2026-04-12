#include "VIPE.hpp"

void Vipe::print(std::string input){
    printf(input.c_str());
}

template <typename T>
int Vipe::Int(T input){
    int output= (int)input;
    return output;
}

template <typename T>
std::string Vipe::str(T input){
    std::string output=(std::string)input;
    return output;
}

template <typename T>
float Vipe::Float(T input){
    float output=(float)input;
    return output;
}

template <typename T>
bool Vipe::Bool(T input){
    bool output=(bool)input;
    return output;
}
