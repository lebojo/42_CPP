/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 20:01:09 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/18 20:53:51 by lebojo           ###   ########.fr       */
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