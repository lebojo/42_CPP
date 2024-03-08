#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <queue>
# include <sstream>

const std::string usage_msg = "Usage: ./RPN \"n0 n1 o0 n2 o1 n3 o2...\"\nn = Number(0-9); o = Operator(* / + -)";

class RPN
{
private:
	std::queue<int> numbers;
	std::queue<char> operators;
public:
	RPN();
	RPN(char *calcul);
	~RPN();
	RPN(const RPN& src);
	RPN& operator=(const RPN& rhs);

	int doTheMath();
};

#endif