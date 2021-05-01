#ifndef HUMANA_H
# define HUMANA_H
 #include <string>	
 #include <iostream>
#include "weapon.hpp"
class humanA
{
	public:
	void		attack(void);
	humanA::humanA(std::string name, Weapon weapon);	
	private:
	std::string name;
	std::string type;
	Weapon weapon;
	
	
};
#endif