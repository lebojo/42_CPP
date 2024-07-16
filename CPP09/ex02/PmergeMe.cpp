#include "PmergeMe.hpp"
#include <iomanip>
#include <sys/time.h>

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
		this->list = rhs.list;
		this->list2 = rhs.list2;
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
	struct timeval start, end;
	print_list("Before: ");
	gettimeofday(&start, NULL);
	merge_insert(list);
	gettimeofday(&end, NULL);
	print_list("After: ");
	
	long elapsed_seconds = end.tv_sec - start.tv_sec;
	long elapsed_useconds = ((elapsed_seconds * 1000000) + end.tv_usec) - (start.tv_usec);

	std::cout << "Time with queue: " << elapsed_seconds << "." << elapsed_useconds << std::endl;

	//Deque:
	gettimeofday(&start, NULL);
	merge_insert2(list2);
	gettimeofday(&end, NULL);

	elapsed_seconds = end.tv_sec - start.tv_sec;
	elapsed_useconds = ((elapsed_seconds * 1000000) + end.tv_usec) - (start.tv_usec);

	std::cout << "Time with dequeue: " << elapsed_seconds << "." << elapsed_useconds << std::endl;
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