/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:05:26 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/08 15:21:13 by mtemel           ###   ########.fr       */
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
	SpellBook& operator = (const SpellBook &copy);
public:
	SpellBook();
	~SpellBook();

	void learnSpell(ASpell* spell);
	void forgetSpell(std::string const &spellname);
	ASpell* createSpell(std::string const &spellname);
};

