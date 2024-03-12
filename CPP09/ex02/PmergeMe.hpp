#ifndef PmergeMe_HPP
# define PmergeMe_HPP

#include <iostream>
#include <queue>

// Pas le droit à: map(ex00) et stack(ex01)

const std::string usage_msg = "Usage: ./PmergeMe [int1] [int2] [int3] ...";

class PmergeMe
{
private:
	std::queue<int> list;
public:
	PmergeMe();
	~PmergeMe();
	PmergeMe(const PmergeMe& src);
	PmergeMe& operator=(const PmergeMe& rhs);

	void print_list(std::string prefix);

	void push(int value);
	int doTheMath();
};

#endif