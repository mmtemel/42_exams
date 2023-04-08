/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 13:15:57 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/08 14:33:19 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
private:
	std::string name;
	std::string title;
	std::vector<ASpell*> spells;
	
	Warlock();
	Warlock(const Warlock& copy);
	Warlock &operator = (const Warlock& copy);
public:
	Warlock(std::string const &name,std::string const &title);
	~Warlock();

	std::string const& getName() const;
	std::string const& getTitle() const;

	void setTitle(std::string const &title);

	void introduce() const;

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string spellname);
	void launchSpell(std::string spellname, ATarget const &target);
};