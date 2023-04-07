/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:47:57 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/07 15:19:21 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell() {}
ASpell::ASpell(const std::string& name, const std::string& effects)
{
	this->name = name;
	this->effects = effects;
}
ASpell::~ASpell() {}
ASpell::ASpell(const ASpell &copy) : name(copy.name), effects(copy.effects) {}
ASpell& ASpell::operator = (const ASpell &copy)
{
	this->name = copy.name;
	this->effects = copy.effects;
	return (*this);
}

const std::string& ASpell::getName() const
{
	return (this->name);
}
const std::string& ASpell::getEffects() const
{
	return (this->effects);
}

void ASpell::launch(const ATarget& target) const
{
	target.getHitBySpell(*this);
}