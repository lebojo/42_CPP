/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 02:16:47 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/14 03:37:15 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;
public:
	Fixed(void);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed & operator=(Fixed const & rhs);

	int getRawBits(void) const;
	void setRawBits(int const raw);

};

#endif