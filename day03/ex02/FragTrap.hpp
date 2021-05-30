#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP	
 #include <iostream>
class FragTrap
{
	public:
    FragTrap();
    ~FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &Frag);
    void rangedAttack(std::string const & target);
    void meleeAttack(std::string const & target);
    void takeDamage(unsigned int amount);
    void  beRepaired(unsigned int amount);
    void vaulthunter_dot_exe(std::string const & target);
    FragTrap			&operator=(FragTrap const &Frag);
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
    void Attack1(std::string const & target);
    void Attack2(std::string const & target);
    void Attack3(std::string const & target);
    void Attack4(std::string const & target);
    void Attack5(std::string const & target);
    
};
#endif