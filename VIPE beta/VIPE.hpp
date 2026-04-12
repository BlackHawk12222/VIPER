#ifndef VIPE_HPP
#define VIPE_HPP

#include <string>
#include <cmath>


class Vipe{
    public:
        void print(std::string input);

        template <typename T>
        int Int(T input);
        template <typename T>
        std::string str(T input);
        template <typename T>
        float Float(T input);
        template <typename T>
        bool Bool(T input);

};

Vipe PY;
#endif //VIPE_HPP
