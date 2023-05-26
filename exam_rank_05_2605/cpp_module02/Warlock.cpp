/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 23:51:19 by mtemel            #+#    #+#             */
/*   Updated: 2023/05/26 04:20:38 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
{
	this->name = name;
	this->title = title;
	std::cout<< this->name << ": This looks like another boring day." << std::endl;
}
Warlock::~Warlock()
{
	std::cout<< this->name << ": My job here is done!\n";
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
	std::cout<< this->name << ": I am " << this->name << ", "<<this->title<<"!"<< std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	// this->spellbook[spell->getName()] = spell->clone();
	this->spellbook.learnSpell(spell);
}
void Warlock::forgetSpell(std::string spellname)
{
	// std::map<std::string, ASpell*>::iterator it = this->spellbook.find(spellname);
	// if(it != this->spellbook.end())
	// {
		// delete (it->second);
		// this->spellbook.erase(it);
	// }
	this->spellbook.forgetSpell(spellname);
}
void Warlock::launchSpell(std::string spellname, ATarget const &target)
{
	// std::map<std::string, ASpell*>::iterator it = this->spellbook.find(spellname);
	// if(it != this->spellbook.end())
	// {
		// it->second->launch(target);
	// }
	ASpell *tmp = this->spellbook.createSpell(spellname);
	if (tmp)
		tmp->launch(target);
}