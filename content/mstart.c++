#include "../core/area.c++"

/*
*   Tommy Wilson
*   28-4-21
*   Demo mod mstart.c++ modded start
*/

struct ModStartPos {
    int x;
    int y;
};

struct ModStartPos mod_start(void) {
    struct ModStartPos msp;
    msp.x = 0;
    msp.y = 1;
    return msp;
}