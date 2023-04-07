/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:25:56 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/07 17:06:37 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string& name, const std::string& title)
{
	this->name = name;
	this->title = title;
	std::cout<<this->name<<": This looks like another boring day."<<std::endl;
}
Warlock::~Warlock()
{
	std::cout<<this->name<<": My job here is done!"<<std::endl;
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for(std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; it++)
	{
		delete (*it);
	}
	this->spells.clear();
}

const std::string& Warlock::getName() const
{
	return (this->name);
}
const std::string& Warlock::getTitle() const
{
	return (this->title);
}
void Warlock::setTitle(const std::string& title)
{
	this->title = title;
}

void Warlock::introduce() const
{
	std::cout<<this->name<<": I am "<<this->name<<", "<<this->title<<"!"<<std::endl;
}

void Warlock::learnSpell(ASpell* spell)
{
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for(std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; it++)
	{
		if ((*it)->getName() == spell->getName())
			return;
	}
	spells.push_back(spell->clone());
}
void Warlock::forgetSpell(std::string spellname)
{
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for(std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; it++)
	{
		if ((*it)->getName() == spellname)
		{
			delete *it;
			this->spells.erase(it);
			break;
		}
	}
}
void Warlock::launchSpell(std::string spellname, ATarget const &target)
{
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for(std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; it++)
	{
		if ((*it)->getName() == spellname)
		{
			(*it)->launch(target);
			break;
		}
	}
}