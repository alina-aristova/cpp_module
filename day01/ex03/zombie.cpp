#include "zombie.hpp"
zombie::zombie()
{
	 
}
zombie::zombie(std::string	name, std::string type)
{
	this->type = type;
	this->name = name;
}
void zombie::setZombieType(std::string type)
{
	this->type = type;
}
void zombie::announce(void)
{
	std::cout << "<" << this->name << " (" << this->type << ")> ";
	std::cout << "Braiiiiiiinnnssss ..." << std::endl;
}
void zombie::randomChamp()
{
	std::string names[] = {"Alina", "Zina", "Maria", "Olga", "Ira", "Izolda"};
	//srand(time(0));
	this->name = names[(rand() % 6)];
	return ;
}