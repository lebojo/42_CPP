/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 05:03:39 by jchapell          #+#    #+#             */
/*   Updated: 2024/02/09 14:41:21 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

using std::string;

class ClapTrap {
private:
	string			name;
	int	healthPoint;
	int	energyPoint;
	int	attackDamage;
public:
	void	attack(const string& target);
	void	takeDamage(unsigned	int amount);
	void	beRepaired(unsigned int amount);

	ClapTrap(string newName);
	ClapTrap();
	~ClapTrap();
	ClapTrap(const ClapTrap& other);
	ClapTrap&	operator=(ClapTrap const& rhs);
};

#endif