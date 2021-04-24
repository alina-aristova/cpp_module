 #include <string>	
 #include <iostream>
int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string  *pointer = &string; 
	std::string   &reference = string;

	std::cout << "string   : " << string << std::endl;
	std::cout << "pointer  : " << *pointer << std::endl;
	std::cout << "reference: " << reference << std::endl;

	return 0;
}