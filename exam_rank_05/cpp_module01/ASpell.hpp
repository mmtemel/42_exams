/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:26:10 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/06 15:47:56 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Warlock.hpp"
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	private:
		std::string name;
		std::string effects;
	public:
	
		ASpell();
		ASpell(const ASpell& copy);
		ASpell operator = (const ASpell& copy);
		ASpell(const std::string &name, const std::string &effects);
		~ASpell();

		virtual ASpell* clone() = 0;

		const std::string& getName() const;
		const std::string& getEffects() const;

		void launch(ATarget const &atarget);

		void setName(const std::string &name);
		void setEffects(const std::string &effects);

};
