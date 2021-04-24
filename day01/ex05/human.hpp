#ifndef HUMAN_H
# define HUMAN_H
 #include <string>	
 #include <iostream>
 #include "brain.hpp"
class Human
{
	public:
		
		std::string identify(void);
		brain &getBrain(void);

	private:
		brain brain;
};
#endif