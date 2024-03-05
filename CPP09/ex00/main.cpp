#include "BitcoinExchange.hpp"

int main(int ac, char** av)
{
	if (ac < 2){
		std::cout << "No input file :(" << std::endl;
		return 1;
	} 

	BitcoinExchange btc;

	if (btc.initDtb("data.csv"))
		return 1;

	if (btc.process(av[1]))
		return 1;

	return 0;
}