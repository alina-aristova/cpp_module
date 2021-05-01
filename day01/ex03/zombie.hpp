#ifndef ZOMBIE_H
# define ZOMBIE_H
 #include <string>	
 #include <iostream>

class zombie
{
	public:
		zombie();
		zombie(std::string	name, std::string	type);
		void announce(void);
		void randomChamp();
		void setZombieType(std::string type);
		
	private:
		std::string	name;
		std::string	type;
};
#endif