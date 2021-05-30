#include "Fixed.hpp"
#include <math.h>

Fixed::Fixed(void)
{
    std::cout << "The default constructor is called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(int value)
{
    std::cout << "The int constructor is called" << std::endl;
    this->value = value << this->bits;
}

Fixed::Fixed(float value)
{
    std::cout << "The float constructor is called" << std::endl;
    this->value = roundf(value * (1 << Fixed::bits));
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

int		Fixed::toInt(void) const
{
	return (this->value >> Fixed::bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (float)(1 << Fixed::bits));
}

std::ostream	&operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
}
