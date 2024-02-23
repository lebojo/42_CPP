#ifndef ScalarConverter_HPP
# define ScalarConverter_HPP

#include <iostream>

class ScalarConverter
{
public:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter& src);
	ScalarConverter& operator=(const ScalarConverter& rhs);
};

#endif