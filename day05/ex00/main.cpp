#include "Bureaucrat.hpp"
# include <exception>
int main(){
//	GradeTooLowException
    std::cout  << "----------Test Low Grade--------------" << std::endl;
	try
    {
		Bureaucrat a("Bureaucrat a", 154);
	}
	catch (std::exception &ex)
    {
		std::cout << ex.what() << std::endl;
	}
	std::cout  << "--------------------------------------" << std::endl;

	std::cout << std::endl;

	Bureaucrat b("Bureaucrat b", 147);
	std::cout  << "-----------Test Low Grade-------------" << std::endl;
	try
    {
		b.addGrade();
        b.addGrade();
        b.addGrade();
        b.addGrade();
        b.addGrade();
        b.addGrade();
        b.addGrade();
	}
	catch (std::exception &ex)
    {
		std::cout << ex.what() << std::endl;
	}
    std::cout  << "--------------------------------------" << std::endl;
	
     std::cout  << "---------Test not valid Grade--------" << std::endl;
	try
	{
		Bureaucrat c("Bureaucrat c", -5);
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout  << "--------------------------------------" << std::endl;
         std::cout  << "---------Test not valid Grade--------" << std::endl;
	try
	{
		Bureaucrat c("Bureaucrat c", 0);
	}
	catch (std::exception &ex){
		std::cout << ex.what() << std::endl;
	}
	std::cout  << "--------------------------------------" << std::endl;
         std::cout  << "---------Test not valid Grade--------" << std::endl;
	try
	{
		Bureaucrat c("Bureaucrat c", 160);
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout  << "--------------------------------------" << std::endl;
         std::cout  << "---------Test not valid Grade--------" << std::endl;
	try
	{
		
		Bureaucrat c("Bureaucrat c", -50);
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout  << "--------------------------------------" << std::endl;
	std::cout << std::endl;
    std::cout  << "-------------------------------------" << std::endl;
    Bureaucrat e("Bureaucrat e", 2);
	try
    {
		e.subGrade();
		e.subGrade();
		e.subGrade();
		e.subGrade();
		e.subGrade();
	}
	catch (std::exception &ex)
    {
		std::cout << ex.what() << std::endl;
	}
   	std::cout  << "---------Test sub error---------------" << std::endl;
    std::cout  << "-------------------------------------" << std::endl;
	
	Bureaucrat d("Bureaucrat d", 148);
	try
	{
		d.subGrade();
		d.subGrade();
		d.subGrade();
		d.subGrade();
		d.subGrade();
	}
	catch (std::exception &ex){
		std::cout << ex.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << b << d << e;
	std::cout << std::endl;
	return 0;
}