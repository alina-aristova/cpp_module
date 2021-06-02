#include "FragTrap.hpp"
typedef void (FragTrap::*attacks)(const std::string &target);
FragTrap::~FragTrap()
{
    std::cout << "The (FragTrap) default destructor is called." << std::endl;
}
FragTrap::FragTrap()
{
    std::cout << "The (FragTrap) default constructor is called." << std::endl;
    this->_armor = 5;
    this->_energyPoints = 100;
    this->_hitPoints = 100;
    this->_level = 1;
    this->_maxEnergy = 100;
    this->_maxHitPoints = 100;
    this->_meleeAttack = 30;
    this->_name = "NoName";
    this->_rangedAttack = 20;
}

/*
**==========================
**    Operator overload
**==========================
*/

FragTrap	&FragTrap::operator=(FragTrap const &Frag)
{
	if (this == &Frag)
		return (*this);
	this->_hitPoints = Frag._hitPoints;
	this->_maxHitPoints = Frag._maxHitPoints;
	this->_energyPoints = Frag._energyPoints;
	this->_maxEnergy = Frag._maxEnergy;
	this->_level = Frag._level;
	this->_name = Frag._name;
	this->_meleeAttack = Frag._meleeAttack;
	this->_rangedAttack  = Frag._rangedAttack ;
	this->_armor = Frag._armor;
	return (*this);

}
FragTrap::FragTrap(FragTrap const &Frag)
{
	std::cout << "The (FragTrap) copy constructor is called." << std::endl;
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
FragTrap::FragTrap(std::string name)
{
    std::cout << "The (FragTrap) constructor is called." << std::endl;
    this->_armor = 5;
    this->_energyPoints = 100;
    this->_hitPoints = 100;
    this->_level = 1;
    this->_maxEnergy = 100;
    this->_maxHitPoints = 100;
    this->_meleeAttack = 30;
    this->_name = name;
    this->_rangedAttack = 20;
}

void FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " " << target << " at range, causing "
    << this->_rangedAttack << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " " << target << " at range, causing "
    << this->_meleeAttack << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
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

void FragTrap::Attack1(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " "<< target 
    <<  " attacked the number 1" << std::endl;
}
void FragTrap::Attack2(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " "<< target 
    <<  " attacked the number 2" << std::endl;
}
void FragTrap::Attack3(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " "<< target 
    <<  " attacked the number 3" << std::endl;
}
void FragTrap::Attack4(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " "<< target 
    <<  " attacked the number 4" << std::endl;
}
void FragTrap::Attack5(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " " << target 
   <<  " attacked the number 5" << std::endl;
}
void		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout
			<< "FR4G-TP " << this->_name << " can't attacks "
			<< target << " his energy poins == 0!" << std::endl;
			return ;
	}
	attacks		attacksMass[5] =
	{
		&FragTrap::Attack1,
		&FragTrap::Attack2,
		&FragTrap::Attack3,
		&FragTrap::Attack4,
		&FragTrap::Attack5
	};
	
	(this->*attacksMass[rand() % 5])(target);
	this->_energyPoints -= 25;
}

