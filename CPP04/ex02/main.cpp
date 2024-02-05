/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:35:45 by lebojo            #+#    #+#             */
/*   Updated: 2024/02/05 20:18:56 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Animal* animals[10];

	for (int i = 0; i < 5; i++)
	{
		animals[i] = new Dog();
		animals[i + 5] = new Cat();
	}
	
	for (int i = 0; i < 10; i++)
	{
		animals[i]->makeSound();
		delete animals[i];
	}

	return 0;
}