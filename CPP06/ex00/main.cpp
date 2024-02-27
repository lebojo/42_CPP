#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./convert [value]" << std::endl;
		return 1;
	}
	ScalarConverter sc;
	sc.convert(av[1]);
	return 0;
}
