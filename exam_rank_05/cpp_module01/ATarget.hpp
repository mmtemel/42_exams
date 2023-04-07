/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:00:38 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/07 17:04:10 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATERGET
#define ATERGET

#include <iostream>

class ASpell;

class ATarget
{
	private:
		std::string type;
	public:
		ATarget();
		ATarget(const ATarget &copy);
		ATarget& operator = (const ATarget &copy);
		ATarget(const std::string& type);
		virtual ~ATarget();

		const std::string& getType() const;

		virtual ATarget* clone() const = 0;

		void getHitBySpell(const ASpell& spell) const;
};

#include "ASpell.hpp"

#endif