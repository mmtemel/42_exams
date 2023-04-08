/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:19:07 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/08 15:50:48 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook() {}
SpellBook::~SpellBook()
{
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for (std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; it++)
	{
		delete (*it);
		this->spells.erase(it);
	}
}

void SpellBook::learnSpell(ASpell *spell)
{
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for (std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; it++)
	{
		if((*it)->getName() == spell->getName())
			return ;
	}
	this->spells.push_back(spell->clone());
}
void SpellBook::forgetSpell(std::string const &spellname)
{
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for (std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; it++)
	{
		if((*it)->getName() == spellname)
		{
			delete (*it);
			this->spells.erase(it);
			return ;
		}
	}
}
ASpell* SpellBook::createSpell(std::string const &spellname)
{
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for (std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; it++)
	{
		if((*it)->getName() == spellname)
		{
			return (*it);
		}
	}
	return 0;
}