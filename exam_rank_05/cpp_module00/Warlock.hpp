/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 13:05:59 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/06 13:17:08 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Warlock
{
	private:
		std::string name;
		std::string title;
		
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
};
