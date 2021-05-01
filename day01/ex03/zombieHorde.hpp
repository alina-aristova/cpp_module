#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP


# include <string>
# include <iostream>
# include "zombie.hpp"

class zombieHorde
{
public:
	zombieHorde();
	zombieHorde(int size);
	void announce(void);

private:
    zombie      *Zombie;
    int         num;
	std::string	name;
	std::string	type;
};

#endif