/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:47:10 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/06 15:44:02 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Warlock.hpp"
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		std::string type;
	public:
	
		ATarget();
		ATarget(const ATarget& copy);
		ATarget operator = (const ATarget& copy);
		ATarget(const std::string &type);
		~ATarget();

		virtual ATarget* clone() = 0;

		const std::string& getType() const;

		void setType(const std::string &type);

		void getHitBySpell(ASpell& const aspell) const;
};
