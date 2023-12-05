/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 22:46:12 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/06 00:12:58 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string strVar = "HI THIS IS BRAIN";
	std::string* stringPTR = &strVar;
	std::string& stringREF = strVar;

	std::cout << "&strVar:	" << &strVar << std::endl;
	std::cout << "stringPTR:	" << stringPTR << std::endl;
	std::cout << "stringREF:	" << &stringREF << std::endl;

	std::cout << "----" << std::endl;

	std::cout << "strVar:		" << strVar << std::endl;
	std::cout << "stringPTR:	" << *stringPTR << std::endl;
	std::cout << "stringREF:	" << stringREF << std::endl;

	return 0;
}