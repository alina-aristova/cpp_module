#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H
 #include <string>	
 #include <iostream>
 #include "zombie.hpp"
class zombieEvent
{
	public:
		void setZombieType(std::string type);
		zombie *randomChamp(void);
		zombie *newZombie(std::string name);

	private:
		std::string	type;
};
#endif