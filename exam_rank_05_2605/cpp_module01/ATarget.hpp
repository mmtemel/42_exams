/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 01:46:40 by mtemel            #+#    #+#             */
/*   Updated: 2023/05/26 01:46:42 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		std::string type;

	public:
		ATarget();
		ATarget(ATarget const &copy);
		ATarget &operator = (ATarget const &copy);
		ATarget(std::string const &type);
		virtual ~ATarget();

		std::string const &getType() const;

		virtual ATarget* clone() const = 0;

		void getHitBySpell(ASpell const &spell) const;
};

#endif