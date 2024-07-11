#ifndef easyfind_HPP
# define easyfind_HPP

#include <algorithm>
#include <iostream>

template <typename T>
int easyfind(T container, int i)
{
	typename T::iterator	res = std::find(container.begin(), container.end(), i);
	
	if (res == container.end())
		throw std::invalid_argument(((std::string)"The following element is not in the containers"));

	return *res;
}

#endif