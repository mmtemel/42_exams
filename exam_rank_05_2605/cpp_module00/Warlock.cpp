/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 23:51:19 by mtemel            #+#    #+#             */
/*   Updated: 2023/05/25 23:51:21 by mtemel           ###   ########.fr       */
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
	std::cout<< this->name << ": My job here is done!" << std::endl;
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