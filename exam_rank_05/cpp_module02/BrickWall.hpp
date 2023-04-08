/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 15:01:17 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/08 15:02:17 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ATarget.hpp"

class BrickWall : public ATarget
{
public:
	BrickWall();
	~BrickWall();

	ATarget* clone() const;
};