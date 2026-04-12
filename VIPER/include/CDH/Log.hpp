#ifndef Log_HPP
#define Log_HPP

#include <map>
#include <string>
#include "main.h"

class Log {
    public:
        constexpr std::string add(std::string code, std::string details);
        constexpr void add_code(std::string code, std::string details);

    private:
        long unsigned int index=0;
        std::map <std::string, std::string> codes{ 
            {"EMD", "Motor ERROR: Motor Disconnected. Motor: "},
            {"EMT", "Motor ERROR: Motor Criticly Hot. Motor: "},
            {"EMC", "Motor ERROR: Motor Current Very High. Motor: "},
            {"EMW", "Motor ERROR: Motor Wattage Very High. Motor:"},
            {"WMT", "Motor WARNING: Motor Hot. Motor: "},
            {"WMC", "Motor WARNING: Motor Current High. Motor: "},
            {"WMW", "Motor WARNING: Motor Wattage High. Motor:"},
            {"DMT", "Motor DATA: Motor Temps Normal. Motor: "},
            {"DMC", "Motor DATA: Motor Current Normal. Motor: "},
            {"DMW", "Motor DATA: Motor Wattage Normal. Motor: "},
            {"EBT", "Battery ERROR: Battery Criticly Hot. Temp: "},
            {"EBC", "Battery ERROR: Battery Current Very High. Current: "},
            {"EBW", "Battery ERROR: Battery Wattage Very High. Wattage: "},
            {"WBT", "Battery WARNING: Battery Hot. Temp: "},
            {"WBC", "Battery WARNING: Battery Current High. Current: "},
            {"WBW", "Battery WARNING: Battery Wattage High. Wattage: "},
            {"DBT", "Battery DATA: Battery Temps Normal. Temp: "},
            {"DBC", "Battery DATA: Battery Current Normal. Current: "},
            {"DBW", "Battery DATA: Battery Wattage Normal. Wattage: "},
            {"DBc", "Battery DATA: Battery Capacity Changed. Capacity:"}
        };

};

#endif  // Log_HPP