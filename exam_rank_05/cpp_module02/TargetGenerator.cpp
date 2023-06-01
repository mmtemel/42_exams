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

void TargetGenerator::learnTargetType(ATarget* target)
{
    if(target)
        this->targets[target->getType()] = target;
}
void TargetGenerator::forgetTargetType(std::string const &target)
{
    if(this->targets.find(target) != this->targets.end())
        this->targets.erase(this->targets.find(target));
}
ATarget *TargetGenerator::createTarget(std::string const &target)
{
    ATarget *ns = NULL;
    if(this->targets.find(target) != this->targets.end())
        ns = this->targets.find(target)->second;
    return ns;
}