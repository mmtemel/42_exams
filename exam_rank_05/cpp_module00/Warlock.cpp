/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:55:50 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/04 23:15:26 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title)
{
	this->name = name;
	this->title = title;

	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName() const
{
	return this->name;
}

const std::string &Warlock::getTitle() const
{
	return this->title;
}

void Warlock::introduce() const
{
	std::cout << this->name <<": I am " << this->name <<", " << this->title << "!" << std::endl;
}

void Warlock::setTitle(const std::string& title)
{
	this->title = title;
}