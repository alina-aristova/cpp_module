#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	const int			_grade;
	int					_execGrade;
	bool				_signedForm;
	const std::string	_target;
public:
	Form();
	Form(std::string name, int grade, int execGrade);
	Form(std::string newName, int newGrade, int newExecGrade, std::string target);
	Form(const Form &form);
	Form &operator=(const Form &form);
	virtual ~Form();
	virtual void execute(Bureaucrat const & executor) const = 0;
	int	getGrade() const;
	std::string	getTarget()const;
	bool getSignedForm() const;
	std::string	getName() const;
    int		getExecGrage() const;
	void 		setSignedForm(bool signedForm);
	void beSigned(Bureaucrat &bureaucrat);
	
	class GradeTooLowException : public std::exception
    {
		const char* what() const throw();
	};
	class GradeTooHighException : public std::exception
    {
		const char* what() const throw();
	};
	class GradeTooExecLowException : public std::exception
    {
		const char* what() const throw();
	};

	class FormIsNotSignedException : public std::exception
    {
		const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream &out, const Form &form);

#endif