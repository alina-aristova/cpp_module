#include "Form.hpp"

Form::Form(): _grade(0)
{
    
}

Form::Form(std::string newName, int newGrade, int newExecGrade):_name(newName),
 _grade(newGrade), _execGrade(newExecGrade), _signedForm(false) 
 {
	if (this->_grade > 150)
		throw Form::GradeTooLowException();
	if (this->_grade < 1)
		throw Form::GradeTooHighException();
	if (this->_execGrade > 150)
		throw Form::GradeTooLowException();
	if (this->_execGrade < 1)
		throw Form::GradeTooHighException();
}
Form::Form(std::string newName, int newGrade, int newExecGrade, std::string target):_name(newName),
 _grade(newGrade), _execGrade(newExecGrade), _signedForm(false) ,_target(target)
 {
	if (this->_grade > 150)
		throw Form::GradeTooLowException();
	if (this->_grade < 1)
		throw Form::GradeTooHighException();
	if (this->_execGrade > 150)
		throw Form::GradeTooLowException();
	if (this->_execGrade < 1)
		throw Form::GradeTooHighException();
}
Form::Form(const Form &form):_name(form.getName()), _grade(form.getGrade()),
 _execGrade(form.getExecGrage()), _signedForm(form.getSignedForm())
{

}

int		Form::getGrade() const 
{
	return (this->_grade);
}

int		Form::getExecGrage() const 
{
	return (this->_execGrade);
}

std::string	Form::getName() const 
{
	return (this->_name);
}
std::string	Form::getTarget() const 
{
	return (this->_target);
}
bool		Form::getSignedForm() const
{
	return (this->_signedForm);
}

void 		Form::setSignedForm(bool signedForm)
{
	this->_signedForm = signedForm;
}

void		Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->_signedForm == true)
    {
		std::cout << "Form "<< this->getName() << " is already signed " << bureaucrat.getName()  << std::endl;
	}
	else if (bureaucrat.getGrade() <= this->_grade)
    {
		this->_signedForm = true;
		std::cout << bureaucrat.getName() << " signs " << "form " << this->getName()  << std::endl;
	}
	else 
    {
		
		throw Form::GradeTooLowException();
	}
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("grade for signature is Low!\n");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("grade for signature is High!\n");
}
Form	&Form::operator=(const Form &form)
{
	if (&form != this)
    {
		this->_execGrade = form.getExecGrage();
		this->_signedForm = form.getSignedForm();
	}
	return (*this);
}

Form::~Form()
{

}

std::ostream&	operator<<(std::ostream &out, const Form &form)
{
	
	if (!form.getSignedForm())
	{
		out << "Form " << form.getName() << " is not signed" << std::endl; 
		return (out);
	}
	out << "Form " << form.getName() << " is signed" << std::endl;
	return (out);
}



const char* Form::FormIsNotSignedException::what() const throw()
{
	return ("Form is not signed!\n");
}

const char* Form::GradeTooExecLowException::what() const throw()
{
	return ("execute the form has a low!\n");
}