/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 04:09:35 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/06 04:15:13 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
private:
	Weapon		*gun;
	std::string	name;
public:
	HumanB(std::string newName) {
		name = newName;
	};
	void	init(std::string newName);
	void	attack(void);
	void	setWeapon(Weapon &theGun);
};

#endif