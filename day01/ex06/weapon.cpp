#include "weapon.hpp"
Weapon::Weapon()
{
	
}
Weapon::Weapon(std::string const type)
{
	std::cout << type << std::endl;
}
void Weapon::setType(std::string const &type)
{
	this->type = type;
}

std::string const &Weapon::getType(void)
{
	return (this->type);
}
