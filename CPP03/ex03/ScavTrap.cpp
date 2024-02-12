/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:43:02 by lebojo            #+#    #+#             */
/*   Updated: 2024/02/12 17:38:32 by jchapell         ###   ########.fr       */
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

ScavTrap::ScavTrap(void) : ClapTrap()
{
	color();
	print(this->name);
	reset();
	println(" just transform into a ScavTrap! (default)");
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	color();
	print(this->name);
	reset();
	println(" just transform into a ScavTrap! (copy)");
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& rhs)
{
	ClapTrap::operator=(rhs);
	this->isGuarded = rhs.isGuarded;
	return *this;
}