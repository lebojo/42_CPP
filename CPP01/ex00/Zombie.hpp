/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 22:48:31 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/05 23:16:45 by lebojo           ###   ########.fr       */
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

void	randomChump(std::string newName);
Zombie*	newZombie(std::string newName);

#endif