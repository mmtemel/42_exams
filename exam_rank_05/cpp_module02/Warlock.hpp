#pragma once

#include <map>
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class ASpell;
class ATarget;
class SpellBook;

class Warlock
{
    private:
        std::string name;
        std::string title;
        SpellBook spellbook;
        Warlock();
        Warlock(Warlock const &copy);
        Warlock &operator = (Warlock const &copy);
    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();

        std::string const &getName() const;
        std::string const &getTitle() const;

        void setTitle(std::string const &title);

        void introduce() const;

        void learnSpell(ASpell*);
        void forgetSpell(std::string);
        void launchSpell(std::string, ATarget const&);
};