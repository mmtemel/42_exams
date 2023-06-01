#include "SpellBook.hpp"

SpellBook::SpellBook() {}
SpellBook::~SpellBook() {}
SpellBook::SpellBook(SpellBook const &copy)
{
    *this = copy;
}
SpellBook &SpellBook::operator = (SpellBook const &copy)
{
    this->spellbook = copy.spellbook;
    return (*this);
}

void SpellBook::learnSpell(ASpell* spell)
{
    if(spell)
        this->spellbook[spell->getName()] = spell;
}
void SpellBook::forgetSpell(std::string const &spell)
{
    if(this->spellbook.find(spell) != this->spellbook.end())
        this->spellbook.erase(this->spellbook.find(spell));
}
ASpell *SpellBook::createSpell(std::string const &spell)
{
    ASpell *ns = NULL;
    if(this->spellbook.find(spell) != this->spellbook.end())
        ns = this->spellbook.find(spell)->second;
    return ns;
}