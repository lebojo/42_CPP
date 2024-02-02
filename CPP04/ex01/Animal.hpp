/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:15:08 by lebojo            #+#    #+#             */
/*   Updated: 2024/02/02 17:56:04 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

using std::string;

class Animal {
protected:
	string type;
public:
	Animal();
	~Animal();
	string	getType() const;
	virtual void	makeSound() const;
};

class Dog : public Animal {
public:
	Dog();
	~Dog();
};

class Cat : public Animal {
public:
	Cat();
	~Cat();
};
#endif