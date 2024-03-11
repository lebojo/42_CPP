#include "RPN.hpp"
#include <iostream>

int main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cout << usage_msg << std::endl;
		return 1;
	}
	try{
		RPN rpn;

		int res = rpn.doTheMath(av[1]);
		
		std::cout << res << std::endl;
	} catch (const std::invalid_argument& e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}