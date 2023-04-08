/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:07:22 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/08 14:50:54 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
private:
	std::string type;
public:
	ATarget();
	ATarget(std::string const &type);
	ATarget(const ATarget &copy);
	ATarget& operator = (const ATarget &copy);
	virtual ~ATarget();

	std::string const& getType() const;

	virtual ATarget* clone() const = 0;

	void getHitBySpell(ASpell const &spell) const;
};