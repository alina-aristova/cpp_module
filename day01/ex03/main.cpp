# include "zombie.hpp"
# include "zombieHorde.hpp"

int main()
{
	zombieHorde zombie;
	srand(time(0));
	zombie = zombieHorde(15);
	zombie.announce();
	
}