#include "easyfind.hpp"
#include <vector>

int	main(void)
{
	std::vector<int>	list;

	for (int i = 0; i < 5; i++)
		list.push_back(i++); // Crée une liste de 1 à 5

	try
	{
		easyfind<std::vector<int> >(list, 0);
		std::cout << 0 << " is in the container !" << std::endl;
		easyfind<std::vector<int> > (list, 6);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}