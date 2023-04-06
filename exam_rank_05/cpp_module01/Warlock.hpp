/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:05:59 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/06 15:16:05 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
	private:
		std::string name;
		std::string title;
		std::vector<ASpell*> aspells;
		
		Warlock();
		Warlock(const Warlock& copy);
		Warlock operator = (const Warlock& copy);
	public:
		Warlock(const std::string &name, const std::string &title);
		~Warlock();

		const std::string& getName() const;
		const std::string& getTitle() const;

		void setTitle(const std::string &title);

		void introduce() const;

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const &spellname);
		void launchSpell(std::string const &spellname, ATarget const &target);
};
