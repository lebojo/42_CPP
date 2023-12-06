/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 03:52:04 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/06 03:57:42 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
{
	Weapon  club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	} 
	{
	Weapon  club = Weapon("crude spiked club");
	HumanB jim("Jim");
	
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}
	return 0;
}