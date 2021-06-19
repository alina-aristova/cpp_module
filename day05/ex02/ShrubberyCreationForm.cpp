#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137, "Default target")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) :
	Form("ShrubberyCreationForm", 145, 137, target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& right)
{
	this->setSignedForm(right.getSignedForm());
	*this = right;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( const ShrubberyCreationForm& right )
{
	this->setSignedForm(right.getSignedForm());
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	if (!this->getSignedForm())
		throw Form::FormIsNotSignedException();
	if (this->getExecGrage() < executor.getGrade()){
		throw Form::GradeTooExecLowException();
	}
	std::ofstream file(this->getTarget() + "_shrubbery");
	if (file.is_open())
	{
		file << "__**_**" << std::endl;
		file << "_**___**" << std::endl;
		file << "_**___**_________*** *" << std::endl;
		file << "_**___**_______**___ ****" << std::endl;
		file << "_**__**_______*___** ___**" << std::endl;
		file << "__**__*______*__**__ ***__**" << std::endl;
		file << "___**__*____*__**___ __**__*" << std::endl;
		file << "____**_**__**_**____ ____**" << std::endl;
		file << "____**___**__**" << std::endl;
        file << "___*___________*" << std::endl;
        file << "__*_____________*" << std::endl;
        file << "_*____0_____0____*" << std::endl;
        file << "_*_______@_______*" << std::endl;
        file << "_*_______________*" << std::endl;
        file << "___*_____v_____*" << std::endl;
        file << "____**___**__**" << std::endl;
        file << "_____**_____** " << std::endl;
		file.close();
	}
	else
	{
		std::cout << "Bad file or filename " << std::endl;
	}
}
