/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 02:24:04 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/09 03:10:42 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "J'aime bien Waven" << std::endl;
}

void Harl::info(void)
{
	std::cout << "Je comprends pas qu'ils ne fassent pas plus de promo" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "Je pense qu'ils devraient faire plus de skins" << std::endl;
}

void Harl::error(void)
{
	std::cout << "C'en est trop, je désinstalle le jeu!" << std::endl;
}

void Harl::complain(std::string level)
{
	if (levelMap.count(level))
		(this->*levelMap[level])();
	else
		std::cout << "I'm fiiine.\n";
}