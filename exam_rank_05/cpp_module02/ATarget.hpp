#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    protected:
        std::string type;
    public:
        ATarget(std::string type);
        ATarget(ATarget const &copy);
        ATarget &operator = (ATarget const &copy);
        virtual ~ATarget();

        std::string getType() const;

        virtual ATarget *clone() const = 0;

        void getHitBySpell(ASpell const &spell) const;
};