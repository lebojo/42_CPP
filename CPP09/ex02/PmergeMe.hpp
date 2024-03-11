#ifndef PmergeMe_HPP
# define PmergeMe_HPP

#include <iostream>
#include <queue>

// Pas le droit à: map(ex00) et stack(ex01)

class PmergeMe
{
public:
	PmergeMe();
	~PmergeMe();
	PmergeMe(const PmergeMe& src);
	PmergeMe& operator=(const PmergeMe& rhs);

	int doTheMath();
};

#endif