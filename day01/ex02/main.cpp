#include "zombie.hpp"
#include "zombieEvent.hpp"
int main()
{
	zombie *zombieOne;
	zombie *zombieTwo;
	zombieEvent type;

	type.setZombieType("boy");
	zombieOne = type.newZombie("Mark");
	zombieOne->announce();
	delete zombieOne;

	type.setZombieType("girl");
	zombieTwo = type.randomChamp();
	zombieTwo->announce();
	delete zombieTwo;

	return 0;


	
}