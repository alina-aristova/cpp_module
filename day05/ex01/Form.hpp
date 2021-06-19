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
public:
	Form();
	Form(std::string name, int grade, int execGrade);
	Form(const Form &form);
	Form &operator=(const Form &form);
	~Form();

	int	getGrade() const;
	bool getSignedForm() const;
	std::string	getName() const;
    int		getExecGrage() const;
	void beSigned(Bureaucrat &bureaucrat);

	class GradeTooLowException : public std::exception
    {
		const char* what() const throw();
	};
		class GradeTooHighException : public std::exception
    {
		const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream &out, const Form &form);

#endif