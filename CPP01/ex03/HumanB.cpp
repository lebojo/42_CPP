/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 04:08:25 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/06 04:20:48 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::init(std::string newName)
{
	this->name = newName;
}

void	HumanB::attack(void)
{
	if (gun != NULL)
		std::cout << this->name << " attacks with their "
				<< this->gun->getType() << std::endl;
	else
		std::cout << this->name << " attacks with his hands"
				<< std::endl;
}

void	HumanB::setWeapon(Weapon &theGun)
{
	this->gun = (Weapon *)&theGun;
}
