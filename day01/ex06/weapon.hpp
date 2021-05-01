#ifndef WEAPON_H
# define WEAPON_H
# include <string>	
# include <iostream>

class Weapon
{
	public:
	Weapon::Weapon();
	void setType(std::string const &type);
	std::string const &getType(void);
	Weapon::Weapon(std::string const type);
		
	private:
	std::string name;
	std::string type;
	
	
};
#endif