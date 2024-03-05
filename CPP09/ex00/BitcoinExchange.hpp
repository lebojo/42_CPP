#ifndef BitcoinExchange_HPP
# define BitcoinExchange_HPP

# include <iostream>
# include <map>
# include <fstream>
# include <cstring>
# include <stdlib.h>
# include <sstream>
# include <iomanip>

class BitcoinExchange
{
private:
	std::map<std::string, float> dtb;
public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& src);
	BitcoinExchange& operator=(const BitcoinExchange& rhs);

	int initDtb(std::string filePath);
	int process(std::string filePath);
	float getPrice(std::string date, float price);
};

#endif