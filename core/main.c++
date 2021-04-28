#include <iostream>
#include <string>

/*
*   Tommy Wilson
*   28-4-21
*   Core C++ file main.c++
*/

#include "character.c++"
#include "gear.c++"
#include "attrib.c++"
#include "area.c++"
#include "charactergear.c++"
#include "gameinfo.c++"
#include "shared.c++"
#include "../content/marea.c++"
#include "../content/mstart.c++"

Character ply;                              // character (actor)
GameInfo g(1,"Tommy Wilson","RPG core");    // GameInfo
Shared s;                                   // for shared functions
Attributes ta;                              // temp attribs
AreaLoader al;                              // for loading files to area
Area a[25][25];                             // for storing map data

int x = 1; int y = 1;

int main() {
    std::cout << "Game: " << g.gname << std::endl;
    std::cout << "Data: " << (sizeof(ply) +
/*#######*/ sizeof(g) +
/*#######*/ sizeof(s) +
/*#######*/ sizeof(ta) +
/*#######*/ sizeof(al) +
/*#######*/ sizeof(a))/1024 << " KB" << std::endl;
    
    std::string input;

/* BELOW HERE IS A GOOD SPOT TO PUT MOD CALLS */

    a[1][1] = mod_area();
    struct ModStartPos msp = mod_start();
    x = msp.x;
    y = msp.y;    
    
/* ABOVE HERE IS A GOOD SPOT TO PUT MOD CALLS */

    for (;;) {
    
        al.loadArea(x,y,a[x][y]);
    
        std::cout << a[1][1].areatext[2] << std::endl;
        std::cout << "Hitpoints: " << ply.getAttribs().hitpoints << std::endl;
        std::cout << "Magic: " << ply.getAttribs().magic << std::endl;
        std::cout << "Resistance: " << ply.getAttribs().resist << std::endl;
        std::cout << "Attack: " << ply.getAttribs().attack << std::endl;
    
        getline(std::cin,input);

        switch (input.at(0))
        {
        case 'n':
            y += 1;
            break;
        case 's':
            y -= 1;
            break;
        case 'w':
            x -= 1;
            break;
        case 'e':
            x += 1;
            break;
        case 't':
            if (a[x][y].itempresent == true) {
                std::cout << "Equipping item from area..." << std::endl;
                CharacterGear chgear;
                chgear = ply.getGear();
                chgear.weapon = a[x][y].getItem();
                ply.setGear(chgear);
                ply.updateAttribs();
            } else {
                std::cout << "There is nothing to take" << std::endl;
            }
        default:
            break;
        }
    }
    return 0;
}

/*
std::cout << "Hitpoints: " << ply.getAttribs().hitpoints << std::endl;
std::cout << "Magic: " << ply.getAttribs().magic << std::endl;
std::cout << "Resistance: " << ply.getAttribs().resist << std::endl;
std::cout << "Attack: " << ply.getAttribs().attack << std::endl;
*/