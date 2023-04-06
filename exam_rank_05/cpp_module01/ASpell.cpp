/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:39:35 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/06 15:46:23 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

// ASpell::ASpell()
// ASpell(const ASpell& copy);
// ASpell operator = (const ASpell& copy);
ASpell::ASpell(const std::string &name, const std::string &effects)
{
	this->name = name;
	this->effects = effects;
}
// ~ASpell();

const std::string& ASpell::getName() const
{
	return (this->name);
}
const std::string& ASpell::getEffects() const
{
	return (this->effects);
}

void ASpell::launch(ATarget const &atarget)
{
	atarget.getHitBySpell(*this);
}

void ASpell::setName(const std::string &name)
{
	this->name = name;
}
void ASpell::setEffects(const std::string &effects)
{
	this->effects = effects;
}