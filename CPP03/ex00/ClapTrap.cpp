/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 05:12:14 by jchapell          #+#    #+#             */
/*   Updated: 2023/12/14 05:58:00 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

void	printLn(string str)
{
	std::cout << str << std::endl;
}

void	print(string str)
{
	std::cout << str;
}

ClapTrap::ClapTrap(string newName)
{
	print(newName);
	printLn(" just spawned!");
	this->name = newName;
	this->healthPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	print(this->name);
	printLn(" is broken");
}

void ClapTrap::attack(const string& target)
{
	if (this->healthPoint <= 0) return;
	print(this->name);
	if (this->energyPoint <= 0)
	{
		printLn(" is exhausted");
		return;
	}
	print(" attack ");
	print(target);
	print(" causing ");
	std::cout << this->attackDamage;
	printLn(" points of damage!");
	this->energyPoint -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->healthPoint <= 0) return;
	print(this->name);
	print(" take ");
	std::cout << amount;
	print(" points of damage :o (");
	this->healthPoint -= amount;
	std::cout << this->healthPoint;
	printLn("HP remain)");
	if ( this->healthPoint <= 0)
	{
		print(this->name);
		printLn(" can't hold it anymore...");
		this->healthPoint = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	print(this->name);
	print(" is healed of ");
	std::cout << amount;
	print(" HP!(");
	this->healthPoint += amount;
	std::cout << this->healthPoint;
	printLn("HP remain)");
}