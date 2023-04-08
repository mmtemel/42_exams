/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 13:56:29 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/08 14:50:45 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
private:
	std::string name;
	std::string effects;
public:
	ASpell();
	ASpell(std::string const &name, std::string const &effects);
	ASpell(const ASpell &copy);
	ASpell& operator = (const ASpell &copy);
	virtual ~ASpell();

	std::string const& getName() const;
	std::string const& getEffects() const;

	virtual ASpell* clone() const = 0;

	void launch(ATarget const &target) const;
};