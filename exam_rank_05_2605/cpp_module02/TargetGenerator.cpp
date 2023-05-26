#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator()
{
	std::map<std::string, ATarget*>::iterator it = this->targetgenerator.begin();
	std::map<std::string, ATarget*>::iterator ite = this->targetgenerator.end();
	for(; it != ite; it++)
	{
		delete (it->second);
		this->targetgenerator.erase(it);
	}
}

void TargetGenerator::learnTargetType(ATarget *target)
{
	this->targetgenerator[target->getType()] = target->clone();
}
void TargetGenerator::forgetTargetType(std::string const &targetname)
{
	std::map<std::string, ATarget*>::iterator it = this->targetgenerator.find(targetname);
	if(it != this->targetgenerator.end())
	{
		delete (it->second);
		this->targetgenerator.erase(it);
	}
}
ATarget *TargetGenerator::createTarget(std::string const &targetname)
{
	std::map<std::string, ATarget*>::iterator it = this->targetgenerator.find(targetname);
	if(it != this->targetgenerator.end())
	{
		return (it->second->clone());
	}
	return NULL;
}