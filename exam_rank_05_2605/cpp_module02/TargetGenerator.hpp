#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <iostream>
#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;
class ATarget;


class TargetGenerator
{
	private:
		std::map<std::string, ATarget*> targetgenerator;

		TargetGenerator(TargetGenerator const &copy);
		TargetGenerator &operator = (TargetGenerator const &copy);
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget *target);
		void forgetTargetType(std::string const &targetname);
		ATarget *createTarget(std::string const &targetname);
};

#endif