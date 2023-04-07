/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:40:03 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/07 16:54:57 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget.hpp"

class Dummy :public ATarget
{
	public:
		Dummy();
		~Dummy();

	virtual ATarget* clone() const;
};

#endif