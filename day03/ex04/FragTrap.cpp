#include "FragTrap.hpp"
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
typedef void (FragTrap::*attacks)(const std::string &target);
FragTrap::~FragTrap()
{
    std::cout << "The (FragTrap) default destructor is called." << std::endl;
}
FragTrap::FragTrap() : ClapTrap(100, 100, 100, 100, 1, 25, 25, 15,"NoName") 
{
    std::cout << "The (FragTrap) default constructor is called." << std::endl;

}
FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, 25, 25, 15,name) 
{
    std::cout << "The (FragTrap) constructor is called." << std::endl;

}
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
