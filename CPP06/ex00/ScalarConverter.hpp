#ifndef ScalarConverter_HPP
# define ScalarConverter_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class ScalarConverter
{
public:
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter& src);
	ScalarConverter& operator=(const ScalarConverter& rhs);

	static void convertToChar(const std::string& str);
	static void convertToInt(const std::string& str);
	static void convertToFloat(const std::string& str);
	static void convertToDouble(const std::string& str);
	static void convert(const std::string& str);
};

#endif