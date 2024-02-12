/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:43:19 by lebojo            #+#    #+#             */
/*   Updated: 2024/02/12 18:04:53 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
private:
	bool isGuarded;
public:
	ScavTrap(string newName);
	ScavTrap();
	~ScavTrap();
	ScavTrap(const ScavTrap& other);
	ScavTrap&	operator=(ScavTrap const& rhs);
	
	void guardGate();
};

#endif