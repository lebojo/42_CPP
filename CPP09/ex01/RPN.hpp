#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
#include <unordered_map>

class RPN
{
private:
	std::unordered_map<char, int> math;
public:
	RPN();
	RPN(int firstNb);
	~RPN();
	RPN(const RPN& src);
	RPN& operator=(const RPN& rhs);

	void doTheMath(int n, char symbole);
};

#endif