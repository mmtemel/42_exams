#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {}

TargetGenerator::TargetGenerator(TargetGenerator const &copy)
{
	*this = copy;
}

TargetGenerator &TargetGenerator::operator = (TargetGenerator const &copy)
{
	this->targets = copy.targets;
	return (*this);
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	if(target)
		this->targets[target->getType()] = target;
}
void TargetGenerator::forgetTargetType(std::string const &targetname)
{
	if(this->targets.find(targetname)!=this->targets.end())
		this->targets.erase(this->targets.find(targetname));
}
ATarget *TargetGenerator::createTarget(std::string const &targetname)
{
	ATarget *temp = NULL;
	if(this->targets.find(targetname)!=this->targets.end())
		temp = this->targets.find(targetname)->second;
	return (temp);
}