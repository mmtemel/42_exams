/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 13:15:57 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/08 13:51:11 by mtemel           ###   ########.fr       */
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
	Warlock &operator = (const Warlock& copy);
public:
	Warlock(std::string const &name,std::string const &title);
	~Warlock();

	std::string const& getName() const;
	std::string const& getTitle() const;

	void setTitle(std::string const &title);

	void introduce() const;
};