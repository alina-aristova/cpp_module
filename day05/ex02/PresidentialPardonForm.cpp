#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5, "default target")
{

}

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) :
		Form("PresidentialPardonForm", 25, 5, target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& right){
	this->setSignedForm(right.getSignedForm());
	*this = right;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=( const PresidentialPardonForm& right )
{
	this->setSignedForm(right.getSignedForm());
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
	if (!this->getSignedForm())
		throw Form::FormIsNotSignedException();
	if (this->getExecGrage() < executor.getGrade()){
		throw Form::GradeTooExecLowException();
	}
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}