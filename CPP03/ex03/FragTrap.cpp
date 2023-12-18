/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:52:38 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/18 20:07:42 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(string newName) : ClapTrap(newName)
{
	color();
	print(this->name);
	reset();
	println(" just transform into a FragTrap!");
	ClapTrap::healthPoint = 100;
	ClapTrap::energyPoint = 100;
	ClapTrap::attackDamage = 30;
}

FragTrap::~FragTrap()
{
	color();
	print(this->name);
	reset();
	println(" lost his Frag privilege!");
}

void FragTrap::highFivesGuys(void)
{
	color();
	print(this->name);
	reset();
	println(": High five?");
}