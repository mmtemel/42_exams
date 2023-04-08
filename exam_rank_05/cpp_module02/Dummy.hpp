/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:25:16 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/08 14:26:36 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ATarget.hpp"

class Dummy : public ATarget
{
public:
	Dummy();
	~Dummy();

	ATarget* clone() const;
};