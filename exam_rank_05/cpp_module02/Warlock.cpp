#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
{
	this->name = name;
	this->title = title;
	std::cout<<this->name<<": This looks like another boring day.\n";
}
Warlock::~Warlock()
{
	std::cout<<this->name<<": My job here is done!\n";
}

Warlock::Warlock() {}

Warlock::Warlock(Warlock const &copy)
{
	*this = copy;
}

Warlock &Warlock::operator = (Warlock const &copy)
{
	this->name = copy.getName();
	this->title = copy.getTitle();
	return (*this);
}

std::string const &Warlock::getName() const
{
	return this->name;
}
std::string const &Warlock::getTitle() const
{
	return this->title;
}

void Warlock::setTitle(std::string const &title)
{
	this->title = title;
}

void Warlock::introduce() const
{
	std::cout<<this->name<<": I am "<<this->name<<", "<<this->title<<"!\n";
}

void Warlock::learnSpell(ASpell *spell)
{
	if(spell)
		this->spellbook.learnSpell(spell);
}
void Warlock::forgetSpell(std::string spellname)
{
	this->spellbook.forgetSpell(spellname);
}
void Warlock::launchSpell(std::string spellname, ATarget const &target)
{
	this->spellbook.createSpell(spellname)->launch(target);
}