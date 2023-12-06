/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 03:40:47 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/06 04:20:16 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
private:
	std::string	name;
	Weapon		&gun;
public:
	HumanA(std::string newName, Weapon &newGun):
		name(newName),
		gun(newGun) {}
	void	init(std::string newName);
	void	attack(void);
	void	setWeapon(Weapon theGun);
};

#endif