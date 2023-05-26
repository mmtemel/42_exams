#include "SpellBook.hpp"

SpellBook::SpellBook() {}
SpellBook::~SpellBook()
{
	std::map<std::string, ASpell*>::iterator it = this->spells.begin();
	std::map<std::string, ASpell*>::iterator ite = this->spells.end();
	while(it != ite)
	{
		if (it->second)
			delete (it->second);
		this->spells.erase(it);
		it++;
	}
}

void SpellBook::learnSpell(ASpell *spell)
{
	if(spell)
		this->spells[spell->getName()] = spell->clone();
}
void SpellBook::forgetSpell(std::string const &spellname)
{
	std::map<std::string, ASpell*>::iterator it = this->spells.find(spellname);
	if(it != this->spells.end())
	{
		delete (it->second);
		this->spells.erase(it);
	}
}
ASpell *SpellBook::createSpell(std::string const &spellname)
{
	std::map<std::string, ASpell*>::iterator it = this->spells.find(spellname);
	if(it != this->spells.end())
	{
		return (it->second->clone());
	}
	return NULL;
}