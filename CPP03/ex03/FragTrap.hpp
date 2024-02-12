/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:47:49 by lebojo            #+#    #+#             */
/*   Updated: 2024/02/12 18:05:15 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
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