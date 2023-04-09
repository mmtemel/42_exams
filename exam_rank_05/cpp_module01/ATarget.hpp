/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 15:48:24 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/09 16:27:23 by mtemel           ###   ########.fr       */
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
	ATarget(const ATarget &copy);
	ATarget &operator = (const ATarget &copy);
	ATarget(std::string const &type);
	virtual ~ATarget();

	std::string const &getType() const;

	virtual ATarget* clone() const = 0;

	void getHitBySpell(ASpell const &spell) const;
};