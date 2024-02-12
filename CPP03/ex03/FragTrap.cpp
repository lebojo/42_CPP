/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:52:38 by lebojo            #+#    #+#             */
/*   Updated: 2024/02/12 17:47:41 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(string newName) : ClapTrap(newName)
{
	color();
	print(this->name);
	reset();
	println(" just transform into a FragTrap!");
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

FragTrap::FragTrap(void) : ClapTrap()
{
	color();
	print(this->name);
	reset();
	println(" just transform into a FragTrap! (default)");
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	color();
	print(this->name);
	reset();
	println(" just transform into a FragTrap! (copy)");
}

FragTrap&	FragTrap::operator=(FragTrap const& rhs)
{
	this->name = rhs.name;
	this->healthPoint = rhs.healthPoint;
	this->energyPoint = rhs.energyPoint;
	this->attackDamage = rhs.attackDamage;
	return *this;
}
