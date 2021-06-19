#include "easyfind.hpp"


int main()
{
	std::vector<int> arr;

	int i = -1;

	while (++i < 10)
		arr.push_back(i);

	std::vector<int>::const_iterator it;
	try
	{
		it = easyfind(arr, 8);
	}
	catch(std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << *it << std::endl;
    std::vector<int>::const_iterator it2;
	try
	{
		it2 = easyfind(arr, -1);
	}
	catch(std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}

    std::vector<int>::const_iterator it3;
	try
	{
		it3 = easyfind(arr, 3);
	}
	catch(std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	std::cout << *it3 << std::endl;
}