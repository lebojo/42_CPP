/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:29:48 by lebojo            #+#    #+#             */
/*   Updated: 2024/01/31 16:42:33 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "A new animal is born!" << std::endl;
}

Animal::~Animal()
{
	std::cout << "An animal is dead" << std::endl;
}

string Animal::getType()
{
	return (this->type);
}

void Animal::makeSound()
{
	if (this->type == "Dog")
		std::cout << "Woof woof" << std::endl;
	else if (this->type == "Cat")
		std::cout << "Meow meow" << std::endl;
	else
		std::cout << "Animal sound" << std::endl;
}

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "A new dog is born!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "A dog is dead" << std::endl;
}

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "A new cat is born!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "A cat is dead" << std::endl;
}