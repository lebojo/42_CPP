#include "easyfind.hpp"
#include <vector>

int	main(void)
{
	std::vector<int>	list;
	int					i;

	i = 0;
	while (i < 5)
		list.push_back(i++); // Crée une liste de 1 à 5

	try
	{
		easyfind<std::vector<int> >(list, 3);
		std::cout << 3 << " is in the container !" << std::endl;
		easyfind<std::vector<int> >(list, 6);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}