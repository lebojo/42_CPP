/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 05:12:14 by jchapell          #+#    #+#             */
/*   Updated: 2023/12/14 22:22:17 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

void	println(string str)
{
	std::cout << str << std::endl;
}

void	print(string str)
{
	std::cout << str;
}

void color()
{
	std::cout << "\e[0;35m";
}

void reset()
{
	std::cout << "\033[0m";
}

ClapTrap::ClapTrap(string newName)
{
	color();
	print(newName);
	reset();
	println(" just spawned!");
	this->name = newName;
	this->healthPoint = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ClapTrap::~ClapTrap()
{
	color();
	print(this->name);
	reset();
	println(" is broken");
}

void ClapTrap::attack(const string& target)
{
	if (this->healthPoint <= 0) return;
	color();
	print(this->name);
	reset();
	if (this->energyPoint <= 0)
	{
		println(" is exhausted");
		return;
	}
	print(" attack ");
	color();
	print(target);
	reset();
	print(" causing ");
	std::cout << this->attackDamage;
	println(" points of damage!");
	this->energyPoint -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->healthPoint <= 0) return;
	color();
	print(this->name);
	reset();
	print(" take ");
	std::cout << amount;
	print(" points of damage :o (");
	this->healthPoint -= amount;
	std::cout << this->healthPoint;
	println("HP remain)");
	if ( this->healthPoint <= 0)
	{
		color();
		print(this->name);
		reset();
		println(" can't hold it anymore...");
		this->healthPoint = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	color();
	print(this->name);
	reset();
	print(" is healed of ");
	std::cout << amount;
	print(" HP!(");
	this->healthPoint += amount;
	std::cout << this->healthPoint;
	println("HP remain)");
}