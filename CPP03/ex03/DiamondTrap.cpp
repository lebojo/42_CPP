/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:01:09 by lebojo            #+#    #+#             */
/*   Updated: 2024/02/12 18:05:22 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(string newName): 
ClapTrap(newName + "_clap_name"), ScavTrap(newName), FragTrap(newName)
{
	this->name = newName;
	this->healthPoint = FragTrap::healthPoint;
	this->energyPoint = ScavTrap::energyPoint;
	this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	color();
	print(this->name);
	reset();
	println(" lost his Diamond privilege!");
}

void DiamondTrap::whoAmI()
{
	color();
	print(this->name);
	reset();
	print(": My ClapName is ");
	color();
	print(ClapTrap::name);
	reset();
	println("!");
}

DiamondTrap::DiamondTrap()
{
	color();
	print(this->name);
	reset();
	println(" just transform into a DiamondTrap! (default)");
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	*this = other;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& rhs)
{
	this->name = rhs.name;
	this->healthPoint = rhs.healthPoint;
	this->energyPoint = rhs.energyPoint;
	this->attackDamage = rhs.attackDamage;
	return *this;
}
