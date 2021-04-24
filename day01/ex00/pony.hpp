#ifndef PONY_H
# define PONY_H
 #include <string>	
 #include <iostream>
class pony
{
	public:
		
		void ponyGetInfo(void);
		void Search(void);
		
	private:
		std::string	FirstName;
		std::string	Nickname;
		std::string	color;
		std::string	Address;
		std::string	age;
};
#endif