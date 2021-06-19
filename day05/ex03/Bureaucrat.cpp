#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string newName, int newGrade):_name(newName), _grade(newGrade)
{
	if (this->_grade > 150)
		throw GradeTooLowException();
	if (this->_grade < 1)
		throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat):_name(bureaucrat.getName()),
 _grade(bureaucrat.getGrade())
{

}

void Bureaucrat::addGrade()
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	this->_grade -= 1;
	std::cout << "good add"<<  std::endl;
}

void Bureaucrat::subGrade()
{
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	this->_grade += 1;
	std::cout << "good sub"<<  std::endl;
    
}
std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is High!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is Low!");
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat){
	if (&bureaucrat != this)
    { 
		this->_grade = bureaucrat.getGrade();
    }
	return (*this);
}

Bureaucrat::~Bureaucrat(){}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat){
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}
void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		
	}
	catch (std::exception & excep)
	{
		std::cout << this->getName() << " cannot sign " << form.getName() << " because " << excep.what() << std::endl;
	}
}


void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executes " << form.getName() << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << this->getName() << " have exception : "
		<< ex.what() << std::endl;
	}
}