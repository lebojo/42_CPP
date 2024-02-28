#include "Span.hpp"

int	main (void)
{
	int	N = 10000;
	std::vector<int>	v;
	Span				span(N);
	int	i = 0;

	while (i < N)
	{
		v.push_back(i);
		i++;
	}

	span.fillSpan(v.begin(), v.end());
	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;
}