/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:33:25 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/05 23:46:35 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string newName)
{
	if (N <= 0)
		return (NULL);

	Zombie *zomb[N];

	for (int i = 0; i < N; i++)
	{
		zomb[i] = new Zombie;
		zomb[i]->setName(newName);
	}

	return (zomb[0]);
}