#ifndef FIXED_H
# define FIXED_H
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
    Fixed(const Fixed &Fixed);
    Fixed		&operator=(Fixed const &fixed);
	private:
    int value;
    static const int bits = 8;
};
#endif