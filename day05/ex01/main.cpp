#include "Bureaucrat.hpp"
#include "Form.hpp"
# include <exception>
int main()
{

    std::cout  << "--------------------------------------" << std::endl;
	try
    {
		Bureaucrat alina("alina",100);
		Form form("test",90,20);
		alina.signForm(form);
		alina.signForm(form);

	}
	catch (std::exception &ex)
    {
		std::cout << ex.what() << std::endl;
	}
	std::cout  << "--------------------------------------" << std::endl;
	std::cout  << "-------------------------------------" << std::endl;
	try
    {
		Bureaucrat malina("malina",1);
		Form form1("test1",1,0);
		malina.signForm(form1);
		malina.signForm(form1);
	}
	catch (std::exception &ex)
    {
		std::cout << ex.what() << std::endl;
	}
    std::cout  << "--------------------------------------" << std::endl;
	std::cout  << "--------------------------------------" << std::endl;
	try
	{
		Bureaucrat galina("galina",100);
		Form form2("test2",120,20);
		galina.signForm(form2);
		galina.signForm(form2);
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout  << "--------------------------------------" << std::endl;
    std::cout  << "--------------------------------------" << std::endl;
	try
	{
		Bureaucrat marina("marina",100);
		Form form3("test3",80,20);
		marina.signForm(form3);
		
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	
	std::cout  << "--------------------------------------" << std::endl;
	std::cout  << "--------------------------------------" << std::endl;
	try
	{
		Bureaucrat German("German",100);
		Form form4("test4",150,20);
		German.signForm(form4);
		
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	
	std::cout << std::endl;

	return 0;
}