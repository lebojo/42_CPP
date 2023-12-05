/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 22:46:12 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/05 23:57:18 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zz;

	zz = zombieHorde(8, "Prout");
	for (int i = 0; i < 8; i++)
	{
		std::cout << i + 1 << ": ";
		zz->announce();
		delete zz;
		zz++;
	}
	return 0;
}