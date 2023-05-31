#pragma once

#include <iostream>
#include <map>
#include "ATarget.hpp"

class ATarget;

class TargetGenerator
{
	private:
		std::map<std::string, ATarget*> targets;

		TargetGenerator(TargetGenerator const &copy);
		TargetGenerator &operator = (TargetGenerator const &copy);
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget*);
		void forgetTargetType(std::string const &);
		ATarget* createTarget(std::string const &);
};