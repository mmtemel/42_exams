/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 15:18:41 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/09 16:48:52 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class ASpell;
class ATarget;

class Warlock
{
private:
	std::string name;
	std::string title;
	SpellBook spellbook;
	
	Warlock();
	Warlock(const Warlock &copy);
	Warlock &operator = (const Warlock &copy);
public:
	Warlock(std::string const &name, std::string const &title);
	~Warlock();

	std::string const &getName() const;
	std::string const &getTitle() const;

	void setTitle(std::string const &title);

	void introduce() const;

	void learnSpell(ASpell* const spell);
	void forgetSpell(std::string spellname);
	void launchSpell(std::string spellname, ATarget const &target);
};