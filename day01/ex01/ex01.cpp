#include <iostream>
#include <string>
#include <unistd.h>
void memoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}