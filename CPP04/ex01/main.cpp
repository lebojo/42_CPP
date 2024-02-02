/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:35:45 by lebojo            #+#    #+#             */
/*   Updated: 2024/02/02 18:09:23 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongj = new WrongCat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << wrongj->getType() << std::endl;
	std::cout << wrongmeta->getType() << std::endl;
	
	j->makeSound();
	i->makeSound();
	meta->makeSound();
	wrongj->makeSound();
	wrongmeta->makeSound();
}