#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "The default constructor is called" << std::endl;
    this->value = 0;
}

Fixed::~Fixed(void)
{
    std::cout << "The default destructor is called" << std::endl;
}

Fixed::Fixed(const Fixed &Fixed)
{
    std::cout << "The copy constructor is called" << std::endl;
    this->value = Fixed.getRawBits();
}
void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

int Fixed::getRawBits(void)const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->value);
}
Fixed	&Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &fixed)
		return (*this);
	this->value = fixed.getRawBits();
	return (*this);
}