#include "ATarget.hpp"

ATarget::ATarget(std::string type)
{
    this->type = type;
}
ATarget::ATarget(ATarget const &copy)
{
    *this = copy;
}
ATarget &ATarget::operator = (ATarget const &copy)
{
    this->type = copy.getName();
    return (*this);
}
ATarget::~ATarget() {}

std::string ATarget::getName() const
{
    return this->type;
}

void ATarget::getHitBySpell(ASpell const &spell) const
{
    std::cout<<this->type<<" has been "<<spell.getEffects()<<"!\n";
}