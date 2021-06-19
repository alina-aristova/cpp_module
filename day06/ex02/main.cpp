
#include <iostream>
#include <ctime>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base    *generate(void)
{
    int     random;

    srand(time(NULL));
    random = rand() % 3;
    if (random == 0)   
        return (new A);  
    if (random == 1)
        return (new B);
    return (new C);
    
}
void	identify_from_pointer(Base *p)
{
    std::cout << "Pointer class: ";
 	if (dynamic_cast<A*>(p)) 
		std::cout << "A" << std::endl;
 	if (dynamic_cast<B*>(p)) 
		std::cout << "B" << std::endl;
 	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	
}

void	identify_from_reference(Base &p)
{
    std::cout << "Reference class: ";
	if (dynamic_cast<A*>(&p)) 
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(&p)) 
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(&p)) 
		std::cout << "C" << std::endl;
}

int		main(void)
{
	Base *ptr;
	std::srand(std::time(NULL));

	ptr = generate();

	identify_from_pointer(ptr);
	identify_from_reference(*ptr);
	delete ptr;
	return (0);
}