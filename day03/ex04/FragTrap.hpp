#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP	
 #include <iostream>
 #include "ClapTrap.hpp"
class FragTrap : virtual public  ClapTrap
{
	public:
    FragTrap();
    ~FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &Frag);
    FragTrap			&operator=(FragTrap const &Frag);
    void vaulthunter_dot_exe(std::string const & target);
    void Attack1(std::string const & target);
    void Attack2(std::string const & target);
    void Attack3(std::string const & target);
    void Attack4(std::string const & target);
    void Attack5(std::string const & target);
};
#endif