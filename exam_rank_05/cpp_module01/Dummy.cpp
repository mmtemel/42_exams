/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:41:08 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/07 16:38:29 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {}
Dummy::~Dummy() {}
ATarget* Dummy::clone() const
{
	return (new Dummy());
}