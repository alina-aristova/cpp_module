#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{}

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->_name = name;
	this->_title = title;
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->getName() << ", " << this->getTitle()
	<<", is dead! Consequences will never be the same!" << std::endl;
}

Sorcerer& Sorcerer::operator=(Sorcerer const& temp)
{
	this->_name = temp.getName();
	this->_title = temp.getTitle();
	return *this;
}

Sorcerer::Sorcerer(const Sorcerer & temp)
{
	this->_name = temp.getName();
	this->_title = temp.getTitle();
	std::cout << this->getName() << ", " << this->getTitle() << ", is born!" << std::endl;
}

std::string Sorcerer::getName() const
{
	return (this->_name);
}

std::string Sorcerer::getTitle() const
{
	return (this->_title);
}

void	Sorcerer::polymorph(Victim const & vic) const
{
	vic.getPolymorphed();
}

std::ostream &operator<<(std::ostream & in, const Sorcerer & sorcerer)
{
	return (in << "I am " << sorcerer.getName() << ", "
	<< sorcerer.getTitle() << ", and I like ponies!" << std::endl);
}
