#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
	std::cout << "PmergeMe default constructor called" << std::endl;
}

PmergeMe::~PmergeMe()
{
	std::cout << "PmergeMe destructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe& src)
{
	*this = src;
	std::cout << "PmergeMe copy constructor called" << std::endl;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& rhs)
{
	if (this != &rhs)
	{
		//Don't forget to copy the attributes here
	}
	std::cout << "PmergeMe assignment operator called" << std::endl;
	return *this;
}

void PmergeMe::print_list()
{
	std::queue<int> tmp = list;
	while (!tmp.empty())
	{
		std::cout << tmp.front() << " ";
		tmp.pop();
	}
	std::cout << std::endl;
}

void PmergeMe::push(int value)
{
	list.push(value);
}

int PmergeMe::doTheMath()
{
	return 1;
}
