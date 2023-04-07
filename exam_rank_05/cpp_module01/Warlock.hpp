/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:23:39 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/07 16:50:37 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
	private:
		std::string name;
		std::string title;
		std::vector<ASpell*> spells;

		Warlock();
		Warlock(const Warlock &copy);
		Warlock &operator = (const Warlock &copy);
	public:
		Warlock(const std::string& name, const std::string& title);
		~Warlock();

		const std::string& getName() const;
		const std::string& getTitle() const;
		void setTitle(const std::string& title);

		void introduce() const;

		void learnSpell(ASpell* spell);
		void forgetSpell(std::string spellname);
		void launchSpell(std::string spellname, ATarget const &target);
};

#endif