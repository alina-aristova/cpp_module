#include "ClapTrap.hpp"
ClapTrap::~ClapTrap()
{
    std::cout << "The (ClapTrap)"
   << "default destructor is called." << std::endl;
}
ClapTrap::ClapTrap()
{
    std::cout << "The (ClapTrap)"
    <<"default constructor is called." << std::endl;
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
ClapTrap	&ClapTrap::operator=(ClapTrap const &Frag)
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
ClapTrap::ClapTrap(ClapTrap const &Frag)
{
	 std::cout << "The (ClapTrap) copy constructor is called." << std::endl;
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
ClapTrap::ClapTrap(std::string name)
{
    std::cout << "The (ClapTrap) constructor is called." << std::endl;
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
ClapTrap::ClapTrap( int armor, int energyPoints,
int hitPoints , int level, int maxEnergy,int maxHitPoints,
int meleeAttack, int rangedAttack,std::string name) 
{
    this->_armor = armor;
    this->_energyPoints = energyPoints;
    this->_hitPoints = hitPoints;
    this->_level = level;
    this->_maxEnergy = maxEnergy;
    this->_maxHitPoints = maxHitPoints;
    this->_meleeAttack = meleeAttack;
    this->_name = name;
    this->_rangedAttack = rangedAttack;
    std::cout << "The (ClapTrap) constructor is called." << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " " << target << " at range, causing "
    << this->_rangedAttack << " points of damage!" << std::endl;
}
int ClapTrap::ranged(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " " << target << " at range, causing "
    << this->_rangedAttack << " points of damage!" << std::endl;
    return 0;
}

void ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->_name << " " << target << " at range, causing "
    << this->_meleeAttack << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
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

void ClapTrap::beRepaired(unsigned int amount)
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