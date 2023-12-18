/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:43:02 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/18 20:15:01 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(string newName) : ClapTrap(newName)
{
	color();
	print(this->name);
	reset();
	this->isGuarded = false;
	println(" just transform into a ScavTrap!");
}

ScavTrap::~ScavTrap()
{
	color();
	print(this->name);
	reset();
	println(" lost his Scav privilege!");
}

void ScavTrap::guardGate()
{
	color();
	print(this->name);
	reset();
	this->isGuarded = !this->isGuarded;
	if (this->isGuarded)
		println(" have enterred in Gate keeper mode (the gates will be keeped)");
	else
		println(" have exited Gate keeper mode");
}