#include "Span.hpp"

// int	main(int ac, char** av)
// {
// 	int N;

// 	if (ac == 1)
// 		N = 12;
// 	else
// 		N = atoi(av[1]);

// 	Span	span(N);
// 	srand(time(NULL));
// 	for (int i = 0; i < N; i++)
// 	{
// 		int rnd = static_cast<unsigned int>(rand());
// 		span.addNumber(rnd);
// 	}
	
// 	std::cout << span.shortestSpan() << std::endl;
// 	std::cout << span.longestSpan() << std::endl;
// 	return (0);
// }

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}