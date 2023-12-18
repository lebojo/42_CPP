/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:52:38 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/18 17:58:13 by lebojo           ###   ########.fr       */
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