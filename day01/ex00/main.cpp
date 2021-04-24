#include "pony.hpp"

void ponyOnTheHeap(void)
{
	pony *ponyOne = new pony();
	std::cout << "Pony on the heap was created"  << std::endl;
	ponyOne->ponyGetInfo();
	ponyOne->Search();
	delete ponyOne;
	std::cout << "Pony on the heap was deleted"  << std::endl;
}
void ponyOnTheStack(void)
{
	pony ponyTwo;
	std::cout << "Pony on the stack was created"  << std::endl;
	ponyTwo.ponyGetInfo();
	ponyTwo.Search();
	
}
int main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return 0;
	
}