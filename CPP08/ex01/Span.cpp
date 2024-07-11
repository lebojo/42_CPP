#include "Span.hpp"


Span::Span(): max(0), tab(NULL), size(0)
{
	std::cout << "Span default constructor called" << std::endl;
}

Span::~Span()
{
	std::cout << "Span destructor called" << std::endl;
}

Span::Span(const Span& src)
{
	*this = src;
	std::cout << "Span copy constructor called" << std::endl;
}

Span& Span::operator=(const Span& rhs)
{
	if (this != &rhs)
	{
		this->max = rhs.max;
		this->tab = new int[this->max];
		for (int i = 0; i < (int)rhs.max; i++)
			this->tab[i] = rhs.tab[i];
		this->size = rhs.size;
	}
	std::cout << "Span assignment operator called" << std::endl;
	return *this;
}

Span::Span(unsigned int n): max(n)
{
	tab = new int[n];
	if (tab)
		std::cout << "Span of " << n << " size created !" << std::endl;
	else
		std::cout << "Can't create the span..." << std::endl;
	this->size = 0;
}

void Span::addNumber(int n)
{
	if (this->size >= this->max)
		throw std::overflow_error("This Span can't take anymore...");
	this->tab[this->size++] = n;
}

int Span::shortestSpan()
{
	if (this->size <= 1)
		throw std::length_error("There is not enough numbers in the Span");
	
	std::vector<int> sortedTab(tab, tab + size);
	std::sort(sortedTab.begin(), sortedTab.end());

	std::vector<int>::iterator it = std::adjacent_find(sortedTab.begin(), sortedTab.end());

	return *(it + 1) - *it;
}

int Span::longestSpan()
{
	if (this->size <= 1)
		throw std::length_error("There is not enough numbers in the Span");

	std::vector<int> sortedTab(tab, tab + size);
	std::sort(sortedTab.begin(), sortedTab.end());

	return (sortedTab.back() - sortedTab.front());
}

void	Span::fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin != end)
	{
		this->addNumber(*begin);
		begin++;
	}
}