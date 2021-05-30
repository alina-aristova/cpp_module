#include "ScavTrap.hpp"
 #include <iostream>
//typedef void (FragTrap::*attacks)(const std::string &target);
ScavTrap::~ScavTrap()
{
    std::cout << "The default destructor is called." << std::endl;
}
ScavTrap::ScavTrap()
{
    std::cout << "The default constructor is called." << std::endl;
    this->_armor = 3;
    this->_energyPoints = 50;
    this->_hitPoints = 100;
    this->_level = 1;
    this->_maxEnergy = 50;
    this->_maxHitPoints = 100;
    this->_meleeAttack = 30;
    this->_name = "NoName";
    this->_rangedAttack = 15;
}
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
ScavTrap::ScavTrap(std::string name)
{
    std::cout << "The constructor is called." << std::endl;
    this->_armor = 3;
    this->_energyPoints = 50;
    this->_hitPoints = 100;
    this->_level = 1;
    this->_maxEnergy = 50;
    this->_maxHitPoints = 100;
    this->_meleeAttack = 30;
    this->_name = name;
    this->_rangedAttack = 15;
}

void ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " " << target << " at range, causing "
    << this->_rangedAttack << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " " << target << " at range, causing "
    << this->_meleeAttack << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    int		damage;

	damage = (int)(amount - this->_armor);

	if (damage <= 0)
		return ;

	if ((int)(this->_hitPoints - damage) <= 0)
    {
        std::cout << "FR4G-TP " << this->_name
        << " Received fatal damage!" << std::endl;
        this->_hitPoints = 0;

    }	
	else
    {
        std::cout << "FR4G-TP " << this->_name
        << " Received " << damage << " damage!" << std::endl;
        this->_hitPoints -= damage;
    }	
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoints + (int)amount >= this->_maxHitPoints)
    {
        std::cout << "FR4G-TP " << this->_name
        << " has the maximum points!" << std::endl;
		this->_hitPoints = 100;
    }
	else
    {
        std::cout << "FR4G-TP " << this->_name
        << " repaired " << amount << " points!" << std::endl;
		this->_hitPoints += amount;
    }
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
