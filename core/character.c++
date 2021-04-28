#include <string>
#include "charactergear.c++"
#include "attrib.c++"

/*
*   Tommy Wilson
*   28-4-21
*   Core C++ file character.c++
*/

#pragma once

class Character {
    private:
        Attributes attributes;  
        CharacterGear gear;
    public:

        Character() {
            setGear(*new CharacterGear);
            updateAttribs();
        }

        CharacterGear getGear(void) {
            return gear;
        }
        Attributes getAttribs(void) {
            return attributes;
        }
        void setAttribs(Attributes attribs) {
            attributes = attribs;
            return;
        }
        void setGear(CharacterGear cgear) {
            gear = cgear;
            return;
        }

        void updateAttribs(void) {
            attributes.hitpoints = (
                gear.armor.attributes.hitpoints + 
                gear.amulet.attributes.hitpoints +
                gear.cloak.attributes.hitpoints +
                gear.ring.attributes.hitpoints +
                gear.weapon.attributes.hitpoints + 10.0
            );

            attributes.magic = (
                gear.armor.attributes.magic + 
                gear.amulet.attributes.magic +
                gear.cloak.attributes.magic +
                gear.ring.attributes.magic +
                gear.weapon.attributes.magic
            );

            attributes.resist = (
                gear.armor.attributes.resist + 
                gear.amulet.attributes.resist +
                gear.cloak.attributes.resist +
                gear.ring.attributes.resist +
                gear.weapon.attributes.resist
            );

            attributes.attack = (
                gear.armor.attributes.attack + 
                gear.amulet.attributes.attack +
                gear.cloak.attributes.attack +
                gear.ring.attributes.attack +
                gear.weapon.attributes.attack
            );
        }
};