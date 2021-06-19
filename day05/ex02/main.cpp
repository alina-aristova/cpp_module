#include <iostream>
#include <unistd.h>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int     main(void)
{
    Bureaucrat  *Alina = new Bureaucrat("Alina", 146);
    Bureaucrat  *Galina = new Bureaucrat("Galina", 100);
    Form        *trees = new ShrubberyCreationForm("TEST");

    std::cout << std::endl;
	std::cout  << "----------------test1----------------------" << std::endl;
    std::cout << *trees << std::endl;;
	std::cout  << "----------------test2----------------------" << std::endl;
    std::cout << *Alina << std::endl;;
    Alina->signForm(*trees);
	std::cout  << "-----------------test3---------------------" << std::endl;
    std::cout << *Galina << std::endl;;
    Galina->signForm(*trees);
	Galina->executeForm(*trees);
	std::cout  << "-----------------test4---------------------" << std::endl;
    std::cout << *trees << std::endl;;
	std::cout  << "-------------------test5-------------------" << std::endl;
    Alina->executeForm(*trees);
    Galina->executeForm(*trees);
	std::cout  << "------------------test6--------------------" << std::endl;
    std::cout << std::endl;
    RobotomyRequestForm     *robot_form = new RobotomyRequestForm("Carl");
		try
    {
		Alina->addGrade();
		Alina->addGrade();
		Alina->addGrade();
		Alina->addGrade();
		Alina->addGrade();
		Alina->addGrade();
		Alina->addGrade();
		Alina->addGrade();
		Alina->addGrade();
		Alina->addGrade();
		Alina->addGrade();
		Alina->addGrade();


	}
	catch (std::exception &ex)
    {
		std::cout << ex.what() << std::endl;
	}
	std::cout  << "-----------------test7---------------------" << std::endl;

	std::cout  << "-----------------test8---------------------" << std::endl;

    std::cout << *robot_form << std::endl;
	std::cout  << "-----------------test9---------------------" << std::endl;
    std::cout << *Alina << std::endl;
	std::cout  << "-----------------test10---------------------" << std::endl;
    Alina->signForm(*robot_form);
	std::cout  << "-----------------test11---------------------" << std::endl;
    std::cout << *Galina << std::endl;
	std::cout  << "-----------------test12---------------------" << std::endl;
    Galina->executeForm(*robot_form);
    Alina->executeForm(*robot_form);
	std::cout  << "-----------------test13---------------------" << std::endl;
    std::cout << std::endl;
    PresidentialPardonForm  *pres_form = new PresidentialPardonForm("Jim");
	try
    {
		Galina->addGrade();
		Galina->addGrade();
		Galina->addGrade();
		Galina->addGrade();
		Galina->addGrade();
		Galina->addGrade();
		Galina->addGrade();
		Galina->addGrade();
		Galina->addGrade();

	}
	catch (std::exception &ex)
    {
		std::cout << ex.what() << std::endl;
	}
	std::cout  << "-----------------test14---------------------" << std::endl;
    std::cout << *pres_form << std::endl;;
    std::cout << *Galina << std::endl;;
	Alina->signForm(*pres_form);
    Alina->executeForm(*pres_form);
    Galina->executeForm(*pres_form);
	std::cout  << "--------------------------------------------" << std::endl;
    delete pres_form;
    delete robot_form;
    delete Galina;
    delete Alina;
    std::cout << std::endl;
    return (0);
}