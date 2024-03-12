#include "PmergeMe.hpp"
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout << usage_msg << std::endl;
		return 1;
	}

	PmergeMe p;

	for(int i = 1; i < ac; i++)
		p.push(atoi(av[i]));

	p.print_list();
	p.doTheMath();

	return 0;
}