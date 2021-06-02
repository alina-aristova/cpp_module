#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP	
 #include <iostream>
 #include "ClapTrap.hpp"
 #include "FragTrap.hpp"
 #include "ScavTrap.hpp"
class NinjaTrap : public ClapTrap
{
	public:
    NinjaTrap();
    ~NinjaTrap();
    NinjaTrap(std::string name);
    NinjaTrap(NinjaTrap const &Scav);
    NinjaTrap    &operator=(NinjaTrap const &Frag);
    void ninjaShoebox(ClapTrap &trap);
    void ninjaShoebox(ScavTrap &trap);
    void ninjaShoebox(FragTrap &trap);
    void ninjaShoebox(NinjaTrap &trap) ;  
	
};
#endif