#include <string>
#include <format>

#include "main.h"
#include "CDH/Log.hpp"

constexpr void Log::add_code(std::string code, std::string details){
    Log::codes[code]=details;
}

constexpr std::string Log::add(std::string code, std::string details){
    int time= (int)pros::c::millis;
    std::string entry= std::format("{} [{}] {} {} \n", Log::index, time, codes[code], details);
    FILE* file= fopen("/usd/Log.csv", "w");
    fputs(entry.c_str(), file);
    printf(entry.c_str());
    Log::index++;
}