#ifndef CONTACT_H
# define CONTACT_H
	#include <string>	
class contact{
	public:
		
		void AddContact(int index);
		void SearchContact(void);
		void Search(void);
		
	private:
		int	index;
		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;
		std::string	Login;
		std::string	Postal;
		std::string	Address;
		std::string	EmailAddr;
		std::string	PhoneNumber;
		std::string	BirthdayDate;
		std::string	favoriteMeal;
		std::string	UnderwearColor;
		std::string	DarkestSecret;
};

#endif