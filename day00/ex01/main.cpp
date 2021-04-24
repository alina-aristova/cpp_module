#include <iostream>
#include "contact.hpp"
#include <iomanip>
#include <string>
void WelcomeFunction(int i)
{
	if (i == 0)
		std::cout << "Welcome to PhoneBook"  << std::endl;
	if (i == 1)
		std::cout << "Choose one of the command: \nADD\nSEARCH\nEXIT"  << std::endl;
}

int main(void)
{
	contact cont[8];
	std::string		command;
	int index = 0;
	WelcomeFunction(0);
	while(1)
	{
		WelcomeFunction(1);
		getline(std::cin, command);
		if (std::cin.eof() != 0)
			return (0);
		if(command == "ADD")
		{
			if(index >= 8)
				std::cout << "Phone book is full!"  << std::endl;
			else
			{
				cont[index].AddContact(index);
				index++; 
			}
		}	
		else if(command == "SEARCH")
		{
			std::cout << "|";
			std::cout << std::setw(10);
			std::cout << "index" << "|"; 		
			std::cout << std::setw(10);
			std::cout << "FirstName" << "|";
			std::cout << std::setw(10);
			std::cout << "lastName" << "|";
			std::cout << std::setw(10);
			std::cout << "Nickname" << "|" << std::endl;
			int i = 0;
			std::string	 num;
			int number = 0;
			while( i < index )
			{
				cont[i].SearchContact();
				i++;
			}
			std::cout << "choose contact: " << std::endl;
			getline(std::cin, num);
			if (std::cin.eof() != 0)
			return (0);
			number = (atoi(num.c_str()));
			
			if(number >= index || number < 0)
				std::cout << "contact not found!" << std::endl;
			else
				cont[number].Search();
		}
		else if(command == "EXIT")
		{
			return 1;
		}
		else
			std::cout << "Command not found!"  << std::endl;
	}
	return 0;
}