#include <string>
#include "attrib.c++"

/*
*   Tommy Wilson
*   28-4-21
*   Core C++ file gear.c++
*/

#pragma once

class Gear {
    public:
        std::string name;
        int id;
        Attributes attributes;

        Attributes getAttribs(void) {
            return attributes;
        }
};