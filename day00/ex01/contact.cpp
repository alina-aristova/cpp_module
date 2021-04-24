#include <iostream>
#include "contact.hpp"
#include <iomanip>
void contact::AddContact(int index)
{
	this->index = index;
	std::cout << "Enter first name: "  << std::endl;
	getline(std::cin, this->FirstName);
	std::cout << "Enter last name: "  << std::endl;
	getline(std::cin, this->LastName);
	std::cout << "Enter nickname: "  << std::endl;
	getline(std::cin, this->Nickname);
	std::cout << "Enter login: "  << std::endl;
	getline(std::cin, this->Login);
	std::cout << "Enter postal: "  << std::endl;
	getline(std::cin, this->Postal);
	std::cout << "Enter address: "  << std::endl;
	getline(std::cin, this->Address);
	std::cout << "Enter email address: "  << std::endl;
	getline(std::cin, this->EmailAddr);
	std::cout << "Enter phone number: "  << std::endl;
	getline(std::cin, this->PhoneNumber);
	std::cout << "Enter birthday date: "  << std::endl;
	getline(std::cin, this->BirthdayDate);
	std::cout << "Enter favorite meal: "  << std::endl;
	getline(std::cin, this->favoriteMeal);
	std::cout << "Enter underwear color: "  << std::endl;
	getline(std::cin, this->UnderwearColor);
	std::cout << "Enter darkest secret: "  << std::endl;
	getline(std::cin, this->DarkestSecret);
	
}
void contact::SearchContact(void)
{
	std::string FirstName = this->FirstName;
	std::string lastName = this->LastName;
	std::string Nickname = this->Nickname;
	if (FirstName.length() > 10)
	{
		FirstName.resize(9);
		FirstName.replace(9, 1, ".");
	}
	if (lastName.length() > 10)
	{
		lastName.resize(9);
		lastName.replace(9, 1, ".");
	}
		if (Nickname.length() > 10)
	{
		Nickname.resize(9);
		Nickname.replace(9, 1, ".");
	}
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << this->index << "|"; 		
	std::cout << std::setw(10);
	std::cout << FirstName << "|";
	std::cout << std::setw(10);
	std::cout << lastName << "|";
	std::cout << std::setw(10);
	std::cout << Nickname << "|" << std::endl;
}

void contact::Search(void)
{
	std::cout << "Info about contact" << std::endl;
	std::cout << "Name           : " << this->FirstName << std::endl;
	std::cout << "Last name      : " << this->LastName << std::endl;
	std::cout << "Nickname       : " << this->Nickname << std::endl;
	std::cout << "Login          : " << this->Login << std::endl;
	std::cout << "Postal         : " << this->Postal << std::endl;
	std::cout << "Address        : " << this->Address<< std::endl;
	std::cout << "Email          : " << this->EmailAddr << std::endl;
	std::cout << "Phone number   : " << this->PhoneNumber << std::endl;
	std::cout << "Birthday       : " << this->BirthdayDate << std::endl;
	std::cout << "Favorite meal  : " << this->favoriteMeal << std::endl;
	std::cout << "Underwear color: " << this->UnderwearColor << std::endl;
	std::cout << "Darkest secret : " << this->DarkestSecret << std::endl;
}
