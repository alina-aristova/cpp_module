#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP	
 #include <iostream>
class ClapTrap 
{
	public:
    ClapTrap();
    ~ClapTrap();
    //FragTrap(std::string name);
    //FragTrap(FragTrap const &Frag);

    //void vaulthunter_dot_exe(std::string const & target);
    //FragTrap			&operator=(FragTrap const &Frag);
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