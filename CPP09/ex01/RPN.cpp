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
		this->mybad = rhs.mybad;
	}
	std::cout << "RPN assignment operator called" << std::endl;
	return *this;
}

void simpleMath(std::stack<int>& mb, char c)
{
	int tmp;

	tmp = mb.top();
	mb.pop();
	if (mb.empty())
		throw std::invalid_argument(usage_msg);
	switch(c){
		case '+':
			tmp += mb.top();
			break;
		case '-':
			tmp = mb.top() - tmp;
			break;
		case '*':
			tmp *= mb.top();
			break;
		case '/':
			tmp = mb.top() / tmp;
			break;
		default:
			throw std::invalid_argument(usage_msg);
			break;
	}
	mb.pop();
	mb.push(tmp);
}

int RPN::doTheMath(char *calcul)
{
	std::istringstream stc(calcul); // stc -> String to char
	std::string auth_ope = "*-+/";
	char c;


	while (stc >> c)
	{
		if (auth_ope.find(c) != std::string::npos)
			simpleMath(mybad, c);
		else if (isdigit(c))
			mybad.push(c - '0');
		else
			throw std::invalid_argument(usage_msg);
	}
	if (mybad.size() > 1)
		throw std::invalid_argument(usage_msg);
	return mybad.top();
}
