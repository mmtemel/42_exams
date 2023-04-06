/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:47:30 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/06 14:55:07 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy()
{
	this->setType("Target Practice Dummy");
}
//~Dummy();

ATarget* Dummy::clone()
{
	Dummy *a = new Dummy();
	return (a);
}