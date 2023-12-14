/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 05:30:18 by jchapell          #+#    #+#             */
/*   Updated: 2023/12/14 05:49:20 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap ct("Minion");
	ClapTrap ct2("Sbire");

	ct.attack("Sbire");
	ct2.takeDamage(0);
	std::cout << "BoJack hear that, and he's angry!" << std::endl;

	ct.takeDamage(5);
	
	std::cout << "BoJack: Isn't that enough?" << std::endl;
	std::cout << "BoJack: Butt Stallion, chaaaaarge!" << std::endl;
	std::cout << "Butt Stallion: HuUUuuh" << std::endl;
	
	ct.takeDamage(1000);
	ct2.takeDamage(1000);

	std::cout << "BoJack: Oh no, Sbire?!" << std::endl;
	std::cout << "BoJack: Bad Butt Stallion, >:(" << std::endl;
	std::cout << "BoJack: I suppose that I have to do something..." << std::endl;

	ct2.beRepaired(10);

	return 0;
}