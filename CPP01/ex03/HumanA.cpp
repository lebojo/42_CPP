/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 03:44:40 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/06 04:25:11 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::init(std::string newName)
{
	this->name = newName;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their "
				<< this->gun.getType() << std::endl;
}

void	HumanA::setWeapon(Weapon theGun)
{
	this->gun = theGun;
}
