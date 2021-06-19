#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45, "default target")
{

}

RobotomyRequestForm::RobotomyRequestForm(const std::string & target) :
		Form("RobotomyRequestForm", 72, 45, target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& right){
	this->setSignedForm(right.getSignedForm());
	*this = right;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=( const RobotomyRequestForm& right ){
	this->setSignedForm(right.getSignedForm());
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
	if (!this->getSignedForm())
		throw Form::FormIsNotSignedException();
	if (this->getExecGrage() < executor.getGrade())
	{
		throw Form::GradeTooExecLowException();
	}
	srand(time(0));
	int r = rand() % 2;
	if (r == 1)
	{
		std::cout << "3e23e23e23e2df13hf1u3h4fp9374gfhp3iu" << std::endl;
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	}
	else
	{
		std::cout << "Failed to robotomize " << this->getTarget() << std::endl;
	}
}
