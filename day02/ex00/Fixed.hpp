#ifndef FIXED_HPP
# define FIXED_HPP
 #include <string>	
 #include <iostream>
class Fixed
{
	public:
    Fixed();
    ~Fixed();
    void setRawBits(int const raw);
    int getRawBits(void)const;
    Fixed(const Fixed &Fixed);
    Fixed		&operator=(Fixed const &fixed);
	private:
    int value;
};
#endif