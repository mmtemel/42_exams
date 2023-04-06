/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:55:24 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/06 15:40:16 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

// ATarget();
// ATarget(const ATarget& copy);
// ATarget operator = (const ATarget& copy);
ATarget::ATarget(const std::string &type)
{
	this->type = type;
}
// ~ATarget();

const std::string& ATarget::getType() const
{
	return (this->type);
}

void ATarget::setType(const std::string &type)
{
	this->type = type;
}

void ATarget::getHitBySpell(ASpell& const aspell) const
{
	std::cout << this->type << " has been " << aspell.getEffects() << "!" << std::endl;
}