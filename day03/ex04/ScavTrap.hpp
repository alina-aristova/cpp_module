#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP	
 #include <iostream>
 #include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
	public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &Scav);
    void        challengeNewcomer(std::string const &target);
    ScavTrap    &operator=(ScavTrap const &Frag);
	private:
};
#endif