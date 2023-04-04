/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:26:21 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/04 23:15:39 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Warlock
{
	private:
		std::string name;
		std::string title;
	public:
		Warlock();
		Warlock(std::string name, std::string title);
		Warlock(const Warlock& copy);
		Warlock& operator = (const Warlock& copy);
		~Warlock();
	
		std::string const &getName() const;
		std::string const &getTitle() const;
		void setTitle(const std::string& title);
	
		void introduce() const;
};