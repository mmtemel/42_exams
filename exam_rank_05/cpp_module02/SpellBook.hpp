#pragma once

#include <map>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class SpellBook
{
    private:
        std::map<std::string, ASpell*> spellbook;

        SpellBook(SpellBook const &copy);
        SpellBook &operator = (SpellBook const &copy);
    public:
        SpellBook();
        ~SpellBook();

        void learnSpell(ASpell*);
        void forgetSpell(std::string const &);
        ASpell* createSpell(std::string const &);
};