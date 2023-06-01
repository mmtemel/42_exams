#pragma once

#include <map>
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class Warlock
{
    private:
        std::string name;
        std::string title;
        std::map<std::string, ASpell*> spellbook;
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