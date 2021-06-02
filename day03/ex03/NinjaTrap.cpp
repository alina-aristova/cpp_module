#include "NinjaTrap.hpp"
NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &Scav)
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

NinjaTrap::~NinjaTrap()
{
    std::cout << "The (NinjaTrap) default destructor is called." << std::endl;
}

NinjaTrap::NinjaTrap() : ClapTrap("NoName",100, 100, 100, 100, 1, 25, 25, 15) 
{
    std::cout << "The (NinjaTrap) default constructor is called." << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name,100, 100, 100, 100, 1, 25, 25, 15) 
{
    std::cout << "The (NinjaTrap) constructor is called." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &Frag)
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

void NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
    std::cout << trap.ranged("Heros") << std::endl;
}
void NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	std::cout << trap.ranged("Heros") << std::endl;
}
void NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	std::cout << trap.ranged("Heros") << std::endl;
}
void NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	std::cout << trap.ranged("Heros") << std::endl;
}