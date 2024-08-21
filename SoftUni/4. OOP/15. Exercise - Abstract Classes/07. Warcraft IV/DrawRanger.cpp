#include "DrawRanger.h"

#include <iostream>

DrawRanger::DrawRanger(const std::string & name,
                    const int           maxMana,
                    const int           baseManaRegenRate)
    : Hero(name, maxMana, baseManaRegenRate) {}


// virtual 
void DrawRanger::castSpell(const SpellType spell) {
    const Spell & sp = _spells[spell];

    if (_currMana >= sp.manaCost) {
        // DrawRanger casted Silence for 90 mana
        std::cout << _name << " casted " << sp.name << " for " << sp.manaCost << " mana" << std::endl;
        _currMana -= sp.manaCost;

        if (spell == SpellType::BASIC)
            // Are-not - not enough mana to cast Animate Dead
            std::cout << _name << " casted " << sp.name << " for 0 mana" << std::endl;
    }
    else {
        std::cout << _name << " - not enough mana to cast " << sp.name << std::endl;
    }
}

// virtual 
void DrawRanger::regenerateMana() {
    _currMana += _manaRegenRate;
    if (_currMana > _maxMana)
        _currMana = _maxMana;
}