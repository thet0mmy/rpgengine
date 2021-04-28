#include <string>

/*
*   Tommy Wilson
*   28-4-21
*   Core C++ file gameinfo.c++
*/

#pragma once

class GameInfo {
    private:
        std::string credits;
    public:
        int vers;
        std::string gname;

        GameInfo(int v, std::string c, std::string g) {
            credits = c;
            gname = g;
            vers = v;
        };

        GameInfo getInfo(void) {
            return *this;
        }

        int getVersion(void) {
            return this->vers;
        }

        std::string getCredits(void) {
            return this->credits;
            // you should just be able to use just credits
            // but i love the arrow operator and I am a C programmer.
        }
};