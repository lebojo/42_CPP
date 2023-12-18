/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:43:02 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/14 22:29:21 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(string newName) : ClapTrap(newName)
{
	color();
	print(this->name);
	reset();
	println(" just transform into a ScavTrap!");
}

ScavTrap::~ScavTrap()
{
	color();
	print(this->name);
	reset();
	println(" is lost his Scav privilege!");
}

void ScavTrap::guardGate()
{
	color();
	print(this->name);
	reset();
	println(" have enterred in Gate keeper mode (the gates will be keeped)");
}