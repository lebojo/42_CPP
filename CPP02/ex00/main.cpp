/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 02:15:38 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/14 03:28:15 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed copy_a( a );
	Fixed c;

	c = copy_a;

	std::cout << a.getRawBits() << std::endl;
	std::cout << copy_a.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;

	return 0;
}