#include "ScalarConverter.hpp"

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

bool outChar(std::string str)
{
	if (str.length() == 1 && !isdigit(str[0]))
		return true;
	else if (str.length() == 1 && isdigit(str[0]))
		return true;
	else if (str.length() == 3 && str[0] == '\'' && str[2] == '\'')
		return true;
	else if (isascii(atoi(str.c_str())))
		return true;
	else
		return false;

}


void ScalarConverter::convert(const std::string& str)
{
	if (str[str.length() - 1] == 'f')
	{
		float f = atof(str.c_str());
		
		if (str == "nanf" || str == "+inff" || str == "-inff")
			std::cout << "Char: impossible" << std::endl;
		else if (outChar(str))
			std::cout << "Char: " << (char)f << std::endl;
		else
			std::cout << "Char: Non displayable" << std::endl;
		std::cout << "Int: " << (int)f << std::endl;
		std::cout << "Float: " << f << "f" << std::endl;
		std::cout << "Double: " << (double)f << std::endl;
	}
	else if (str.find('.') != std::string::npos)
	{
		double d = atof(str.c_str());
		
		if (str == "nan" || str == "+inf" || str == "-inf")
			std::cout << "Char: impossible" << std::endl;
		else if (outChar(str))
			std::cout << "Char: " << (char)d << std::endl;
		else
			std::cout << "Char: Non displayable" << std::endl;
		std::cout << "Int: " << (int)d << std::endl;
		std::cout << "Float: " << (float)d << "f" << std::endl;
		std::cout << "Double: " << d << std::endl;
	}
	else if (str.length() == 1 && !isdigit(str[0]))
	{
		if (str == "nan" || str == "+inf" || str == "-inf")
			std::cout << "Char: impossible" << std::endl;
		else if (outChar(str))
			std::cout << "Char: " << str[0] << std::endl;
		else
			std::cout << "Char: Non displayable" << std::endl;
		std::cout << "Int: " << (int)str[0] << std::endl;
		std::cout << "Float: " << (float)str[0] << "f" << std::endl;
		std::cout << "Double: " << (double)str[0] << std::endl;
	}
	else if (isdigit(str[0]) || (str[0] == '-' && isdigit(str[1])))
	{
		int i = atoi(str.c_str());

		if (str == "nan" || str == "+inf" || str == "-inf")
			std::cout << "Char: impossible" << std::endl;
		else if (outChar(str))
			std::cout << "Char: " << (char)i << std::endl;
		else
			std::cout << "Char: Non displayable" << std::endl;
		std::cout << "Int: " << i << std::endl;
		std::cout << "Float: " << (float)i << "f" << std::endl;
		std::cout << "Double: " << (double)i << std::endl;
	}
	else
	{
		outChar(str);
		std::cout << "Int: impossible" << std::endl;
		std::cout << "Float: " << str << "f" << std::endl;
		std::cout << "Double: " << str << std::endl;
	}
}