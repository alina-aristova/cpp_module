#include "zombie.hpp"

zombie::zombie(std::string	name, std::string type)
{
	this->type = type;
	this->name = name;
}
void zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> ";
	std::cout << "Braiiiiiiinnnssss ..." << std::endl;
}