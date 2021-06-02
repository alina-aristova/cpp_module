#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP	
 #include <iostream>
class ClapTrap 
{
	public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &Frag);
ClapTrap( int armor, int energyPoints,
int hitPoints , int level, int maxEnergy,int maxHitPoints,
int meleeAttack, int rangedAttack,std::string name) ;
    void                rangedAttack(std::string const & target);
    int                 ranged(std::string const & target);
    void                meleeAttack(std::string const & target);
    void                takeDamage(unsigned int amount);
    void                beRepaired(unsigned int amount);
    ClapTrap			&operator=(ClapTrap const &Frag);

    protected:
    std::string _name;
    int         _hitPoints;
    int         _maxHitPoints;
    int         _energyPoints;
    int         _maxEnergy;
    int         _level;
    int         _meleeAttack;
    int         _rangedAttack;
    int         _armor;
};
#endif