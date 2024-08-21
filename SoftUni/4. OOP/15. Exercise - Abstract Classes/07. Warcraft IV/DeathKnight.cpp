#include "DeathKnight.h"

#include <iostream>

DeathKnight::DeathKnight(const std::string & name,
                    const int           maxMana,
                    const int           baseManaRegenRate)
    : Hero(name, maxMana, baseManaRegenRate) {}


// virtual 
void DeathKnight::castSpell(const SpellType spell) {
    const Spell & sp = _spells[spell];

    if (_currMana >= sp.manaCost) {
        // DrawRanger casted Silence for 90 mana
        std::cout << _name << " casted " << sp.name << " for " << sp.manaCost << " mana" << std::endl;
        _currMana -= sp.manaCost;

        if (spell == SpellType::ULTIMATE)
            // free basic spell
            std::cout << _name << " casted " << _spells[SpellType::BASIC].name << " for 0 mana" << std::endl;
    }
    else {
        std::cout << _name << " - not enough mana to cast " << sp.name << std::endl;
    }
}

// virtual 
void DeathKnight::regenerateMana() {
    _currMana += _manaRegenRate;
    if (_currMana > _maxMana)
        _currMana = _maxMana;
}