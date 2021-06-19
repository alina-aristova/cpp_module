#include <iostream>
#include <cmath>


static void     to_char(double num_sym)
{
	std::cout << "char: ";
	if (std::isprint(num_sym))
		std::cout << "'" << static_cast<char>(num_sym) << "'" << std::endl;
	else if (isnan(num_sym))
        std::cout << "impossible" << std::endl;	
	else
        std::cout << "Non displayable" << std::endl;
		
}

static void     to_int(double num)
{
	std::cout << "int: ";
	if (INT_MAX < num || INT_MIN > num || isnan(num))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(num) << std::endl;
}

static void     to_float(float num)
{

	std::cout << "float: ";
	if (num - static_cast<int>(num) == 0.0)
		std::cout << num << ".0";
	else
		std::cout << num;
	std::cout << "f" << std::endl;
}

static void		to_double(double num)
{
	std::cout << "double: ";
	if (num - static_cast<int>(num) == 0.0)
		std::cout << num << ".0";
	else
		std::cout << num;
	std::cout << std::endl;

}

int		main(int argc, char **argv)
{

	if (argc != 2)
    {
        std::cout << "Wrong number of arguments!" << std::endl;
	    return (0);
    }
	std::string str = argv[1];	
	double num = std::strtod(str.c_str(), NULL);
	to_char(num);
	to_int(num);
	to_float(num);
	to_double(num);

	return (0);
}