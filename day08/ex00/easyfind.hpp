#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>
# include <vector>

class notFound : public std::exception
{
	const char* what() const throw()
    {
		return ("Iterator not found !");
	}
};

template<typename T> typename T::iterator easyfind(T &arr, int index)
{

	typename T::iterator  res;

	res = std::find(arr.begin(), arr.end(), index);
	if (res != arr.end())
		return (res);
	else
		throw notFound();
}

#endif