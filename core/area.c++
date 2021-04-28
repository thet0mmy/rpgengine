#include <string>
#include <iostream>
#include <fstream>
#include "gear.c++"
#pragma once

/*
*   Tommy Wilson
*   28-4-21
*   Core C++ file area.c++
*/

class Area {
    public:
        std::string areatext[40];
        Gear item;
        bool itempresent;
        int x;
        int y;

        bool isItemPresent(void) {
            return itempresent;
        }

        Gear getItem(void) {
            return this->item;
        }
    //
};

class AreaLoader {
    public:
        bool loadArea(int x, int y, Area area) {
            std::ifstream file;
            int lcount;
            std::string line;
            char fname[99];
            
            sprintf(fname,"../content/area/%ix%i",x,y);
            file.open(fname);

            if (file.is_open()) {
                while(getline(file,line)) {
                    area.areatext[lcount] = line;
                    std::cout << line << std::endl;
                    lcount++;
                }
                file.close();
            } else {
                std::cout << "We couldn't open file " << fname << std::endl;
                std::cout << "Tell the mod developers" << std::endl;
            }
            return false;
        }
    //
};