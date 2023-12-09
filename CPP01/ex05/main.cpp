/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 02:23:34 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/09 03:22:32 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::string;

int	main(void)
{
	Harl harl;
	string input;

	while (1)
	{
		std::cout << "C'est quoi le niveau de Harl ? > ";
		std::cin >> input;
		if (input == "EXIT")
			break;
		harl.complain(input);
		std::cin.clear();
		input.clear();
	}
	return 0;
}