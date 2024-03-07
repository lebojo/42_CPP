#include "RPN.hpp"
#include <iostream>

int main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./RPN \"n0 n1 o0 n2 o1 n3 o2...\"" << std::endl;
		std::cout << "n = Number; o = Operator" << std::endl;
	}
	RPN rpn(1);

	rpn.doTheMath(2, '+');
	return 0;
}