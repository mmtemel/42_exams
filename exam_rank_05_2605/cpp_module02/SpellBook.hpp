#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <map>
#include "ASpell.hpp"

class SpellBook
{
	private:
		std::map<std::string, ASpell*> spells;

		SpellBook(SpellBook const &copy);
		SpellBook &operator = (SpellBook const &copy);
	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spellname);
		ASpell *createSpell(std::string const &spellname);
};

#endif