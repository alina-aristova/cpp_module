#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP	
 #include <iostream>
class ScavTrap
{
	public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &Scav);

    void        rangedAttack(std::string const & target);
    void        meleeAttack(std::string const & target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
    void        challengeNewcomer(std::string const &target);
    ScavTrap    &operator=(ScavTrap const &Frag);
	private:
    int _hitPoints;
    int _maxHitPoints;
    int _energyPoints;
    int _maxEnergy;
    int _level;
    std::string _name;
    int _meleeAttack;
    int _rangedAttack;
    int _armor;
    
};
#endif