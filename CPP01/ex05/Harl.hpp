/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 02:23:50 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/09 03:01:02 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <map>
# include <string>

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	//demander pour ça: 
	typedef void (Harl::*FuncPtr)(void);
	std::map<std::string, FuncPtr> levelMap;
	// jusqu'ici
public:
	Harl(){
		levelMap["debug"] = &Harl::debug;
		levelMap["info"] = &Harl::info;
		levelMap["warning"] = &Harl::warning;
		levelMap["error"] = &Harl::error;
	}
	void	complain(std::string level);
};

#endif