#include "../core/gear.c++"
#include "../core/area.c++"

/*
*   Tommy Wilson
*   28-4-21
*   marea.c++ (modded areas)
*/

// add dagger to 1x1


Area mod_area(void) {
    Gear tgear;
    Area a;
    tgear.attributes.attack = 0.75;
    tgear.attributes.hitpoints = 0.0;
    tgear.attributes.magic = 0.0;
    tgear.attributes.resist = 0.0;
    a.item = tgear;
    a.itempresent = true;

    return a;
}