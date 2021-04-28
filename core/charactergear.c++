#include <string>
#include "gear.c++"

/*
*   Tommy Wilson
*   28-4-21
*   Core C++ file charactergear.c++
*/

#pragma once

class CharacterGear {
    public:
        Gear armor;
        Gear amulet;
        Gear ring;
        Gear cloak;
        Gear weapon;

        CharacterGear() {
            armor.attributes.attack = 0;
            armor.attributes.hitpoints = 0;
            armor.attributes.magic = 0;
            armor.attributes.resist = 0;

            amulet.attributes.attack = 0;
            amulet.attributes.hitpoints = 0;
            amulet.attributes.magic = 0;
            amulet.attributes.resist = 0;

            ring.attributes.attack = 0;
            ring.attributes.hitpoints = 0;
            ring.attributes.magic = 0;
            ring.attributes.resist = 0;

            cloak.attributes.attack = 0;
            cloak.attributes.hitpoints = 0;
            cloak.attributes.magic = 0;
            cloak.attributes.resist = 0;

            weapon.attributes.attack = 0;
            weapon.attributes.hitpoints = 0;
            weapon.attributes.magic = 0;
            weapon.attributes.resist = 0;
        }

        void equipWeapon(Gear w) {
            this->weapon = w;
            return;
        }
    //
};