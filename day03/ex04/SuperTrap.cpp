#include"FragTrap.hpp"
#include"NinjaTrap.hpp"
#include"SuperTrap.hpp"
#include "ClapTrap.hpp"

SuperTrap::SuperTrap(std::string name): ClapTrap("q"), NinjaTrap(), FragTrap()
{
    std::cout << "The (SuperTrap)"
    <<" constructor is called." << std::endl;
    this->_level = 1;
    this->_name = name;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_maxHitPoints = FragTrap::_maxHitPoints;
    this->_energyPoints= NinjaTrap::_energyPoints;
    this->_maxEnergy = NinjaTrap::_maxEnergy;
    this->_meleeAttack = NinjaTrap::_meleeAttack;
    this->_rangedAttack = FragTrap::_rangedAttack;
    this->_armor = FragTrap::_armor;

}

SuperTrap::~SuperTrap()
{
   std::cout << "The (SuperTrap)"
    <<" destructor is called." << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
