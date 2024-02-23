#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./convert [value]" << std::endl;
		return 1;
	}
	ScalarConverter sc(av[1]);
	sc.displayChar();
	sc.displayInt();
	sc.displayFloat();
	sc.displayDouble();
	return 0;
}
