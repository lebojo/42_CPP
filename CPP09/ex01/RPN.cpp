#include "RPN.hpp"

RPN::RPN(){}

RPN::~RPN(){}

RPN::RPN(const RPN& src)
{
	*this = src;
	std::cout << "RPN copy constructor called" << std::endl;
}

RPN& RPN::operator=(const RPN& rhs)
{
	if (this != &rhs)
	{
		//Don't forget to copy the attributes here
	}
	std::cout << "RPN assignment operator called" << std::endl;
	return *this;
}

RPN::RPN(char *calcul)
{
	std::istringstream stc(calcul); // stc -> String to char
	std::string auth_ope = "*-+/";
	char c;
	bool nb = true;

	stc >> c;
	if (c >= '0' && c <= '9')
		numbers.push(c - '0');
	else
		throw std::invalid_argument(usage_msg);
	while(stc >> c)
	{
		if (c == ' ')
			continue;
		else if (c >= '0' && c <= '9' && nb)
			numbers.push(c - '0');
		else if (auth_ope.find(c) != std::string::npos && !nb)
			operators.push(c);
		else
			throw std::invalid_argument(usage_msg);
		nb = !nb;
	}
	if (!nb)
		throw std::invalid_argument(usage_msg);
}

int RPN::doTheMath()
{
	int res = numbers.front();

	numbers.pop();
	while (!numbers.empty())
	{
		char op = operators.front();

		switch(op){
			case '+':
				res += numbers.front();
				break;
			case '-':
				res -= numbers.front();
				break;
			case '*':
				res *= numbers.front();
				break;
			case '/':
				res /= numbers.front();
				break;
			default:
				throw std::invalid_argument(usage_msg);
		}

		operators.pop();
		numbers.pop();
	}
	return res;
}
