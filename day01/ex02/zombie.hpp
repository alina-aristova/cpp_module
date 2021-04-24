#ifndef ZOMBIE_H
# define ZOMBIE_H
 #include <string>	
 #include <iostream>

class zombie
{
	public:

		zombie(std::string	name, std::string	type);
		void announce(void);
		
	private:
		std::string	name;
		std::string	type;
};
#endif