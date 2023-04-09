/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 16:52:49 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/09 16:54:26 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include "ATarget.hpp"

class ATarget;

class TargetGenerator
{
private:
	std::vector<ATarget*> targets;
	
	TargetGenerator(const TargetGenerator &copy);
	TargetGenerator &operator = (const TargetGenerator &copy);
public:
	TargetGenerator();
	~TargetGenerator();

	void learnTargetType(ATarget* target);
	void forgetTargetType(std::string const &targetname);
	ATarget* createTarget(std::string const &targetname);
};