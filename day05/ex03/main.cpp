
#include <iostream>
#include <unistd.h>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int     main(void)
{
    
        Intern Staz;
        Form *tree;
        Form *robot_form;
        Form *pres_form;
        Form *noname_form;

        tree = Staz.makeForm("shrubbery creation", "tree_file.out");
        robot_form = Staz.makeForm("robotomy request", "test1");
        pres_form = Staz.makeForm("presidential pardon", "Test2");
         std::cout <<"-----------------------------------" << std::endl;
        try
        {
            noname_form = Staz.makeForm("NoName", "Alina");
        }
        catch (std::exception &e)
        {
            std::cerr << "Exception: " << e.what() << std::endl;
        }


        delete tree;
        delete robot_form;
        delete pres_form;
    
        std::cout <<"-----------------------------------" << std::endl;
        Intern intern;
        Bureaucrat Alina("Alina", 5);
        Form *form_presid = intern.makeForm("presidential pardon", "trees");
        std::cout <<"-----------------------------------" << std::endl;
        try
        {
            Form *b;
            b = intern.makeForm("president pardon", "trees");
        }
        catch (std::exception &ex)
        {
            std::cout << ex.what() << std::endl;
        }
        
        std::cout <<"-----------------------------------" << std::endl;
        try
        {
            form_presid->beSigned(Alina);
            form_presid->execute(Alina);
        }
        catch (std::exception &ex)
        {
            std::cout << ex.what() << std::endl;
        }
        std::cout <<"-----------------------------------" << std::endl;
        Form *form_robot = intern.makeForm("robotomy request", "Cat");
        try
		{
            form_robot->beSigned(Alina);
            form_robot->execute(Alina);
        }
        catch (std::exception  &ex)
		{
            std::cout << ex.what() << std::endl;
        }

        std::cout <<"-----------------------------------" << std::endl;
        Form *form_shrub = intern.makeForm("shrubbery creation", "Garden");
        try
        {
            form_shrub->beSigned(Alina);
            form_shrub->execute(Alina);
        }
        catch (std::exception &ex)
        {
            std::cout << ex.what() << std::endl;
        }
        std::cout <<"-----------------------------------" << std::endl;

        delete form_presid;
        delete form_robot;
        delete form_shrub;

    return (0);
}