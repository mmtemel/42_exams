/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:25:56 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/07 14:35:42 by mtemel           ###   ########.fr       */
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