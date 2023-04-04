#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock
{
	private:
		std::string name;
		std::string title;

		Warlock();
		Warlock(const Warlock& copy);
		Warlock& operator = (const Warlock& copy);
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock();
	
		std::string const &getName() const;
		std::string const &getTitle() const;
		void setTitle(const std::string& title);
	
		void introduce() const;
};

#endif