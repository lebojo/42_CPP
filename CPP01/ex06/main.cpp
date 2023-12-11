/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 02:23:34 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/11 01:54:54 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

using std::string;

int	error(string err)
{
	std::cout << "Error: " << err << std::endl;
	return (1);
}

int	main(int ac, char **av)
{
	Harl harl;
	string input;

	if (ac != 2)
		return error("args");
	harl.complain(av[1]);
	return 0;
}