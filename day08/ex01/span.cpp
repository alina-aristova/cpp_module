#include"span.hpp"
span::span(void) {}

span::span(unsigned int n)
{
	this->_maxSize = n;
}

span::~span() {}


span::span(const span &sp)
{
	*this = sp;
}

span	&span::operator=(const span &temp)
{
	this->_maxSize = temp._maxSize;
	this->_arr = temp._arr;
	return *this;
}
void	span::addNumber(int n)
{
	if (this->_arr.size() < this->_maxSize)
		this->_arr.push_back(n);
	else
		throw ArrayIsFullException();
}
int	span::shortestSpan(void)
{
	int	ret;

	if (_arr.size() < 2)
		throw std::exception();
	std::vector<int>::iterator start = _arr.begin();
	ret = *start;
	start++;
	ret = *start - ret;
	return ret;
}

int	span::longestSpan(void)
{
	if (_arr.size() < 2)
		throw std::exception();
	std::vector<int>::iterator start = _arr.begin();
	std::vector<int>::iterator end = _arr.end();
	end--;
	return *end - *start;
	
}

