#include "Span.hpp"

int	main(int ac, char** av)
{
	int N;

	if (ac == 1)
		N = 12;
	else
		N = atoi(av[1]);

	Span	span(N);
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		int rnd = static_cast<unsigned int>(rand());
		span.addNumber(rnd);
	}
	
	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;
}