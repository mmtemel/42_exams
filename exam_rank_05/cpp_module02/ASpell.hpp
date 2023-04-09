/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 15:35:51 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/09 16:27:28 by mtemel           ###   ########.fr       */
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
	ASpell(const ASpell &copy);
	ASpell &operator = (const ASpell &copy);
	ASpell(std::string const &name, std::string const &effects);
	virtual ~ASpell();

	std::string const &getName() const;
	std::string const &getEffects() const;

	virtual ASpell* clone() const = 0;

	void launch(ATarget const &target) const;
};