/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:42:45 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/08 15:50:56 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator()
{
	std::vector<ATarget*>::iterator ite = this->targets.end();
	for (std::vector<ATarget*>::iterator it = this->targets.begin(); it != ite; it++)
	{
		delete (*it);
		this->targets.erase(it);
	}
}

void TargetGenerator::learnTargetType(ATarget* target)
{
	std::vector<ATarget*>::iterator ite = this->targets.end();
	for (std::vector<ATarget*>::iterator it = this->targets.begin(); it != ite; it++)
	{
		if((*it)->getType() == target->getType())
			return ;
	}
	this->targets.push_back(target->clone());
}
void TargetGenerator::forgetTargetType(std::string const &targetname)
{
	std::vector<ATarget*>::iterator ite = this->targets.end();
	for (std::vector<ATarget*>::iterator it = this->targets.begin(); it != ite; it++)
	{
		if((*it)->getType() == targetname)
		{
			delete (*it);
			this->targets.erase(it);
			return ;
		}
	}
}
ATarget* TargetGenerator::createTarget(std::string const &targetname)
{
	std::vector<ATarget*>::iterator ite = this->targets.end();
	for (std::vector<ATarget*>::iterator it = this->targets.begin(); it != ite; it++)
	{
		if((*it)->getType() == targetname)
		{
			return (*it);
		}
	}
	return 0;
}