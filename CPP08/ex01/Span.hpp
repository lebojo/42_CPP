#ifndef Span_HPP
# define Span_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
	unsigned int 	max;
	int*			tab;
	unsigned int	size;
public:
	Span();
	Span(unsigned int n);
	~Span();
	Span(const Span& src);
	Span& operator=(const Span& rhs);

	void	addNumber(int n);
	int		shortestSpan();
	int		longestSpan();
	void	fillSpan(int min, int max);
};

#endif