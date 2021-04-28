#include <iostream>
#include "gameinfo.c++"

/*
*   Tommy Wilson
*   28-4-21
*   Core C++ file shared.c++
*/

#pragma once

class Shared {
    public:
        std::string getCredits(GameInfo g) {
            return g.getCredits();
        }
    //
};