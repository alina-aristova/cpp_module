#include <string>
#include <iomanip>
#include "pony.hpp"

void pony::ponyGetInfo(void)
{
	std::cout << "Enter first name: "  << std::endl;
	getline(std::cin, this->FirstName);
	std::cout << "Enter nick name: "  << std::endl;
	getline(std::cin, this->Nickname);
	std::cout << "Enter age: "  << std::endl;
	getline(std::cin, this->age);
	std::cout << "Enter Address: "  << std::endl;
	getline(std::cin, this->Address);
	std::cout << "Enter color: "  << std::endl;
	getline(std::cin, this->color);
}

void pony::Search(void)
{
	std::cout << "Info about this pony: " << std::endl;
	std::cout << "Name           : " << this->FirstName << std::endl;
	std::cout << "Nickname       : " << this->Nickname << std::endl;
	std::cout << "Age            : " << this->age << std::endl;
	std::cout << "Color        	 : " << this->color << std::endl;
	std::cout << "Address        : " << this->Address<< std::endl;
}
