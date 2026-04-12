#ifndef VIPER_HPP
#define VIPER_HPP

#include "Interpritor.hpp"
#include "VIPE.hpp"
#include "CLEAR.hpp"

class Viper{
    public:
        void Code_inject_opcontrol();
        void Code_inject_autonomous();
        void Code_inject_competition_initialize();
        void Code_inject_disabled();
        void Code_inject_initialize();
        void Code_inject_on_center_button();
};
#endif  // VIPER_HPP