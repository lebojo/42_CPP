/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 22:48:23 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/05 23:19:59 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string newName)
{
	Zombie *zombzomb;

	zombzomb = new Zombie;
	zombzomb->setName(newName);

	return (zombzomb);
}