#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>

class Bureaucrat{
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &bureaucrat);
	int	getGrade() const;
	std::string	getName() const;
	void	subGrade();
	void	addGrade();
	Bureaucrat		&operator=(const Bureaucrat &bureaucrat);
	~Bureaucrat();
	class GradeTooLowException : public std::exception
    {
		const char* what() const throw();
	};
	class GradeTooHighException : public std::exception
    {
		const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif