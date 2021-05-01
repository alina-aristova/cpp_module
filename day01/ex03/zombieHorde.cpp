#include "zombieHorde.hpp"
#include "zombie.hpp"
zombieHorde::zombieHorde()
{
	 
}
void zombieHorde::announce(void)
{
	for (int i = 0; i < this->num; i++)
		this->Zombie[i].announce();
	delete [] this->Zombie;
	
}
zombieHorde::zombieHorde(int size)
{
	int i = 0;
	this->Zombie = new zombie[size];
	this->num = size;
	while (i < size)
	{
		//srand(time(0));
		this->Zombie[i].randomChamp();
		this->Zombie[i].setZombieType("zombie");
		i++;
	}
	
}