/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:02:13 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/07 15:14:31 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget() {}
ATarget::ATarget(const std::string& type)
{
	this->type = type;
}
ATarget::~ATarget() {}
ATarget::ATarget(const ATarget &copy) : type(copy.type) {}
ATarget& ATarget::operator = (const ATarget &copy)
{
	this->type = copy.type;
	return (*this);
}

const std::string& ATarget::getType() const
{
	return (this->type);
}

void ATarget::getHitBySpell(const ASpell& spell) const
{
	std::cout<<this->type<<" has been "<<spell.getEffects()<<"!"<<std::endl;
}