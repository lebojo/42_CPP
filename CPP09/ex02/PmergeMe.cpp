#include "PmergeMe.hpp"
#include <iomanip>

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

void PmergeMe::print_list(std::string prefix)
{
	std::cout << prefix;
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
	list2.push_back(value);
}

void PmergeMe::doTheMath()
{
	//Queue:
	std::chrono::time_point<std::chrono::system_clock> start, end;
	print_list("Before: ");
	start = std::chrono::system_clock::now();
	merge_insert(list);
	end = std::chrono::system_clock::now();
	print_list("After: ");
	std::chrono::duration<double> elapsed_seconds = end - start;

	std::cout << std::fixed << std::setprecision(6);
	std::cout << "Time with queue: " << elapsed_seconds.count() << "s" << std::endl;

	//Deque:
	start = std::chrono::system_clock::now();
	merge_insert2(list2);
	end = std::chrono::system_clock::now();
	elapsed_seconds = end - start;

	std::cout << std::fixed << std::setprecision(6);
	std::cout << "Time with deque: " << elapsed_seconds.count() << "s" << std::endl;
}

void merge_insert2(std::deque<int> &q)
{
	if (q.size() > 2)
	{
		std::deque<int> q1;
		std::deque<int> q2;
		int size = q.size();
		for (int i = 0; i < size / 2; i++)
		{
			q1.push_back(q.front());
			q.pop_front();
		}
		while (!q.empty())
		{
			q2.push_back(q.front());
			q.pop_front();
		}
		merge_insert2(q1);
		merge_insert2(q2);
		while (!q1.empty() && !q2.empty())
		{
			if (q1.front() < q2.front())
			{
				q.push_back(q1.front());
				q1.pop_front();
			}
			else
			{
				q.push_back(q2.front());
				q2.pop_front();
			}
		}
		while (!q1.empty())
		{
			q.push_back(q1.front());
			q1.pop_front();
		}
		while (!q2.empty())
		{
			q.push_back(q2.front());
			q2.pop_front();
		}
	}
	else if (q.size() == 2) //Quand on est a la fin de la recursion
	{
		if (q.front() > q.back()) //On swap si c'est pas dans l'ordre
		{
			int tmp = q.front();
			q.pop_front();
			q.push_back(tmp);
		}
	}
}

void merge_insert(std::queue<int> &q)
{
	if (q.size() > 2)
	{
		std::queue<int> q1;
		std::queue<int> q2;
		int size = q.size();
		for (int i = 0; i < size / 2; i++)
		{
			q1.push(q.front());
			q.pop();
		}
		while (!q.empty())
		{
			q2.push(q.front());
			q.pop();
		}
		merge_insert(q1);
		merge_insert(q2);
		while (!q1.empty() && !q2.empty())
		{
			if (q1.front() < q2.front())
			{
				q.push(q1.front());
				q1.pop();
			}
			else
			{
				q.push(q2.front());
				q2.pop();
			}
		}
		while (!q1.empty())
		{
			q.push(q1.front());
			q1.pop();
		}
		while (!q2.empty())
		{
			q.push(q2.front());
			q2.pop();
		}
	}
	else if (q.size() == 2) //Quand on est a la fin de la recursion
	{
		if (q.front() > q.back()) //On swap si c'est pas dans l'ordre
		{
			int tmp = q.front();
			q.pop();
			q.push(tmp);
		}
	}
}