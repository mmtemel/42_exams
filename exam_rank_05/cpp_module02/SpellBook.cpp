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

void SpellBook::learnSpell(ASpell *spell)
{
	if(spell)
		this->spellbook[spell->getName()] = spell;
}
void SpellBook::forgetSpell(std::string const &spellname)
{
	if(this->spellbook.find(spellname)!=this->spellbook.end())
		this->spellbook.erase(this->spellbook.find(spellname));
}
ASpell *SpellBook::createSpell(std::string const &spellname)
{
	ASpell *temp = NULL;
	if(this->spellbook.find(spellname)!=this->spellbook.end())
		temp = this->spellbook.find(spellname)->second;
	return (temp);
}