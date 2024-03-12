#include "PmergeMe.hpp"
#include <stdlib.h>

int main(int ac, char **av)
{
	srand(time(NULL)); // For true randomness

	int size = 3000;

	int arr[size];

	for (int i = 0; i < size; i++)
		arr[i] = rand() % size + 1; // generate a random positive integer between 1 and 100

	PmergeMe p;

	if (ac == 1)
		for(int i = 0; i < size; i++)
			p.push(arr[i]);
	else
		for (int i = 1; i < ac; i++)
			p.push(atoi(av[i]));

	p.doTheMath();

	return 0;
}