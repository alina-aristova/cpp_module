#include "ScavTrap.hpp"
ScavTrap	&ScavTrap::operator=(ScavTrap const &Scav)
{
	if (this == &Scav)
		return (*this);
	this->_hitPoints = Scav._hitPoints;
	this->_maxHitPoints = Scav._maxHitPoints;
	this->_energyPoints = Scav._energyPoints;
	this->_maxEnergy = Scav._maxEnergy;
	this->_level = Scav._level;
	this->_name = Scav._name;
	this->_meleeAttack = Scav._meleeAttack;
	this->_rangedAttack  = Scav._rangedAttack ;
	this->_armor = Scav._armor;
	return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "The (ScavTrap) default destructor is called." << std::endl;
}
ScavTrap::ScavTrap() : ClapTrap("NoName",100, 100, 100, 100, 1, 25, 25, 15) 
{
    std::cout << "The (ScavTrap) default constructor is called." << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name,100, 100, 100, 100, 1, 25, 25, 15) 
{
    std::cout << "The (ScavTrap) constructor is called." << std::endl;

}
ScavTrap::ScavTrap(ScavTrap const &Frag)
{
	 std::cout << "The copy constructor is called." << std::endl;
	this->_hitPoints = Frag._hitPoints;
	this->_maxHitPoints = Frag._maxHitPoints;
	this->_energyPoints = Frag._energyPoints;
	this->_maxEnergy = Frag._maxEnergy;
	this->_level = Frag._level;
	this->_name = Frag._name;
	this->_meleeAttack = Frag._meleeAttack;
	this->_rangedAttack  = Frag._rangedAttack ;
	this->_armor = Frag._armor;
	

}
void		ScavTrap::challengeNewcomer(std::string const &target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout
			<< "FR4G-TP " << this->_name << " can't attacks "
			<< target << " his energy poins == 0!" << std::endl;
			return ;
	}
	std::string		attacksMass[5] =
	{
		" hit on the head ",
		" hit on the nose ",
		" hit on the hand ",
		" hit on the  leg ",
		" hit on the face "
	};
	
	std::cout << "FR4G-TP " << this->_name
        << attacksMass[rand()%5] << target <<  std::endl;
	this->_energyPoints -= 25;
}
