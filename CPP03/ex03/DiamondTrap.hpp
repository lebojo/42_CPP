/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:16:44 by lebojo            #+#    #+#             */
/*   Updated: 2024/02/12 17:55:03 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	string name;
public: 
	DiamondTrap(string newName);
	~DiamondTrap();
	DiamondTrap();
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap&	operator=(DiamondTrap const& rhs);

	void whoAmI();
};

#endif