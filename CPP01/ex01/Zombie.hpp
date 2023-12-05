/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 22:48:31 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/05 23:39:06 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
	std::string name;
	std::string type;
public:
	void announce();
	void setName(std::string hisName);
	std::string getName();
	~Zombie();
};

Zombie*	zombieHorde(int N, std::string newName);

#endif