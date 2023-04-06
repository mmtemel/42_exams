/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:11:23 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/06 14:33:29 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
{
	this->setName("Fwoosh");
	this->setEffects("fwooshed");
}

ASpell* Fwoosh::clone()
{
	Fwoosh *a = new Fwoosh();
	return (a);
}