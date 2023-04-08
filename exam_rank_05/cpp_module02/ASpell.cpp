/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:03:24 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/08 14:47:51 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell() {}
ASpell::ASpell(std::string const &name, std::string const &effects)
{
	this->name = name;
	this->effects = effects;
}
ASpell::ASpell(const ASpell &copy)
{
	this->name = copy.name;
	this->effects = copy.effects;
}
ASpell& ASpell::operator = (const ASpell &copy)
{
	this->name = copy.name;
	this->effects = copy.effects;
	return (*this);
}
ASpell::~ASpell(){}

std::string const& ASpell::getName() const
{
	return (this->name);
}
std::string const& ASpell::getEffects() const
{
	return (this->effects);
}

void ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell(*this);
}