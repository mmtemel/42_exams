/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 16:39:43 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/09 16:46:58 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include "ASpell.hpp"

class ASpell;

class SpellBook
{
private:
	std::vector<ASpell*> spells;
	
	SpellBook(const SpellBook &copy);
	SpellBook &operator = (const SpellBook &copy);
public:
	SpellBook();
	~SpellBook();

	void learnSpell(ASpell* spell);
	void forgetSpell(std::string const &spellname);
	ASpell* createSpell(std::string const &spellname);
};