/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 14:23:39 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/07 14:33:50 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Warlock
{
	private:
		std::string name;
		std::string title;
		
		Warlock();
	public:
		Warlock(const std::string& name, const std::string& title);
		~Warlock();

		const std::string& getName() const;
		const std::string& getTitle() const;
		void setTitle(const std::string& title);

		void introduce() const;
};