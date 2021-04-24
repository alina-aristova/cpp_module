#include "zombieEvent.hpp"
#include "zombie.hpp"
void zombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

zombie *zombieEvent::newZombie(std::string	name)
{
	zombie *Zombie;

	Zombie = new zombie(name,this->type);
	return(Zombie);
}

zombie *zombieEvent::randomChamp()
{
	zombie *Zombie;

	std::string names[] = {"Alina", "Zina", "Maria", "Olga", "Ira", "Izolda"};
	Zombie = new zombie(names[(rand() % 6)],this->type);
	return (Zombie);
}
