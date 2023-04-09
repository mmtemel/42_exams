/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 15:48:44 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/09 15:59:02 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget() {}
ATarget::ATarget(const ATarget &copy)
{
	this->type = copy.type;
}
ATarget &ATarget::operator = (const ATarget &copy)
{
	this->type = copy.type;
	return (*this);
}
ATarget::ATarget(std::string const &type)
{
	this->type = type;
}
ATarget::~ATarget() {}

std::string const &ATarget::getType() const
{
	return (this->type);
}

void ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout<<this->type<<" has been "<<spell.getEffects()<<"!\n";
}