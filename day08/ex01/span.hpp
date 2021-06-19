#ifndef SPAN_HPP
# define SPAN_HPP

# include <exception>
# include <ctime>
# include <vector>
#
class span
{
		size_t		_maxSize;
		std::vector<int>	_arr;
	public:
			span(void);
			~span(void);
			span(const span &sp);
		    span	&operator=(const span &);
			span(unsigned int n);
		    void	addNumber(int);

            template<typename T> void addNumber(T begin, T end)
            {
                if (this->_arr.size() + std::distance(begin, end) > this->_maxSize)
                    throw ArrayIsFullException();
                this->_arr.assign(begin, end);
            }


            class ArrayIsFullException : public std::exception
            {       
                const char* what() const throw()
                {
                    return ("Array Is Full Exception");
                }
            };
            std::size_t	maxSize(void) const;
            std::size_t	size(void) const;
            int		shortestSpan(void);
            int		longestSpan(void);
};



#endif