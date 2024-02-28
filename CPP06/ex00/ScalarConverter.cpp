#include "ScalarConverter.hpp"
#include <climits>

ScalarConverter::ScalarConverter()
{
	std::cout << "ScalarConverter default constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "ScalarConverter destructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& src)
{
	*this = src;
	std::cout << "ScalarConverter copy constructor called" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs)
{
	if (this != &rhs)
	{
		//Don't forget to copy the attributes here
	}
	std::cout << "ScalarConverter assignment operator called" << std::endl;
	return *this;
}

bool isWeird(std::string str)
{
	if (str == "nan" || str == "+inf" || str == "-inf"
		|| str == "nanf" || str == "+inff" || str == "-inff")
		return true;
	else
		return false;
}

bool canChar(std::string str)
{
	if (str.length() == 1 && !isdigit(str[0]))
		return true;
	else if (str.length() == 3 && str[0] == '\'' && str[2] == '\'' && !isdigit(str[1]))
		return true;
	else if (isdigit(str[0]) && atoi(str.c_str()) >= 32 && atoi(str.c_str()) <= 127)
		return true;
	else
		return false;
}

bool canInt(std::string str)
{
	if (isWeird(str))
		return false;
	else if (atoi(str.c_str()) >= INT_MIN && atoi(str.c_str()) <= INT_MAX)
		return true;
	else
		return false;
}

bool isOnlyDigit(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

void ScalarConverter::convert(const std::string& str)
{
	if (str[str.length() - 1] == 'f') //FLOAT
	{
		float f = atof(str.c_str());
		
		if (isWeird(str))
			std::cout << "Char: impossible" << std::endl;
		else if (canChar(str))
			std::cout << "Char: " << static_cast<char>(f) << std::endl;
		else
			std::cout << "Char: Non displayable" << std::endl;
		if (canInt(str))
			std::cout << "Int: " << static_cast<int>(f) << std::endl;
		else
			std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: " << f << "f" << std::endl;
		std::cout << "Double: " << static_cast<double>(f)<< std::endl;
	}
	else if (str.find('.') != std::string::npos) //DOUBLE
	{
		double d = atof(str.c_str());
		
		if (isWeird(str))
			std::cout << "Char: impossible" << std::endl;
		else if (canChar(str))
			std::cout << "Char: " << static_cast<char>(d) << std::endl;
		else
			std::cout << "Char: Non displayable" << std::endl;
		if (canInt(str))
			std::cout << "Int: " << static_cast<int>(d) << std::endl;
		else
			std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: " << static_cast<float>(d)<< "f" << std::endl;
		std::cout << "Double: " << d << std::endl;
	}
	else if (str.length() == 1 && !isdigit(str[0])) //CHAR
	{
		char c = str[0];
		std::cout << "Char: " << c << std::endl;
		if (canInt(str))
			std::cout << "Int: " << static_cast<int>(c) << std::endl;
		else
			std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: " << static_cast<float>(c) << "f" << std::endl;
		std::cout << "Double: " << static_cast<double>(c) << std::endl;
	}
	else if ((isdigit(str[0]) || (str[0] == '-' && isdigit(str[1]))) && isOnlyDigit(str)) //INT 
	{
		int i = atoi(str.c_str());

		if (isWeird(str))
			std::cout << "Char: impossible" << std::endl;
		else if (canChar(str))
			std::cout << "Char: " << static_cast<char>(i) << std::endl;
		else
			std::cout << "Char: Non displayable" << std::endl;
		std::cout << "Int: " << i << std::endl;
		std::cout << "Float: " << static_cast<float>(i) << "f" << std::endl;
		std::cout << "Double: " << static_cast<double>(i) << std::endl;
	}
	else
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: impossible" << std::endl;
		std::cout << "Double: impossible" << std::endl;
		std::cout << "Input should be one of these type: char, int, float, double" << std::endl;
	}
}