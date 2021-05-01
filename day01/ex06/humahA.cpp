#include"humanA.hpp"
#include "weapon.hpp"
humanA::humanA(std::string name, Weapon weapon)	
{
	this->name = name;
	this->weapon = weapon;
}
void		humanA::attack(void)
{
	std::cout << "HumanA " << this->name << " attacks with his " << this->weapon.getType()  << std::endl;
}