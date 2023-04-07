/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:42:42 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/07 17:03:35 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>

class ATarget;

class ASpell
{
	private:
		std::string name;
		std::string effects;
	public:
		ASpell();
		ASpell(const ASpell &copy);
		ASpell& operator = (const ASpell &copy);
		ASpell(const std::string& name, const std::string& effects);
		virtual ~ASpell();

		const std::string& getName() const;
		const std::string& getEffects() const;

		virtual ASpell* clone() const = 0;

		void launch(const ATarget& target) const;
};

#include "ATarget.hpp"

#endif