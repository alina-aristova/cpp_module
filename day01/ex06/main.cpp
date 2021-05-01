#include "weapon.hpp"
#include "humanA.hpp"
int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		humanA bob("Bob", club);
		bob.attack();	
		club.setType("some other type of club");
		bob.attack();
	}
	{
		// Weapon club = Weapon("crude spiked club");
		// HumanB jim("Jim");
		// jim.setWeapon(club);
		// jim.attack();
		// club.setType("some other type of club");
		// jim.attack();
	}
}