/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:47:49 by lebojo            #+#    #+#             */
/*   Updated: 2024/02/12 17:44:22 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(string newName);
	~FragTrap();
	FragTrap();
	FragTrap(const FragTrap& other);
	FragTrap&	operator=(FragTrap const& rhs);

	void highFivesGuys(void);
};

#endif