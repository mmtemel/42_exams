/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 15:25:41 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/09 16:27:04 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
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
		this->spells.erase(it);
	}
}

std::string const &Warlock::getName() const
{
	return (this->name);
}
std::string const &Warlock::getTitle() const
{
	return (this->title);
}

void Warlock::setTitle(std::string const &title)
{
	this->title = title;
}

void Warlock::introduce() const
{
	std::cout<<this->name<<": I am "<<this->name<<", "<<this->title<<"!\n";
}

void Warlock::learnSpell(ASpell* const spell)
{
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for(std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; it++)
	{
		if((*it)->getName() == spell->getName())
			return;
	}
	this->spells.push_back(spell->clone());
}
void Warlock::forgetSpell(std::string spellname)
{
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for(std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; it++)
	{
		if((*it)->getName() == spellname)
		{
			delete (*it);
			this->spells.erase(it);
		}
	}
}
void Warlock::launchSpell(std::string spellname, ATarget const &target)
{
	std::vector<ASpell*>::iterator ite = this->spells.end();
	for(std::vector<ASpell*>::iterator it = this->spells.begin(); it != ite; it++)
	{
		if((*it)->getName() == spellname)
			(*it)->launch(target);
	}
}