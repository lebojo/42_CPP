#ifndef RPN_HPP
# define RPN_HPP

#include <stdio.h>

class RPN
{
public:
	RPN();
	~RPN();
	RPN(const RPN& src);
	RPN& operator=(const RPN& rhs);
};

#endif