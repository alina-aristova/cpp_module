#ifndef FIXED_HPP
#define FIXED_HPP
 #include <string>	
 #include <iostream>
 
class Fixed
{
	public:
    Fixed();
    Fixed(int value);
    Fixed(float value);
    ~Fixed();
    void setRawBits(int const raw);
    int getRawBits(void)const;
    int toInt() const;
    float toFloat() const;
    Fixed(const Fixed &Fixed);
    Fixed		&operator=(Fixed const &fixed);
    
	private:
    int value;
    static const int bits = 8;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &value);
#endif

