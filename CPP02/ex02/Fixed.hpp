/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchapell <jchapell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 02:16:47 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/14 04:37:51 by jchapell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
private:
	int _fixedPointValue;
	static const int _fractionalBits = 8;
public:
	Fixed(void);
	Fixed(const int n);
	Fixed(const float n);
	Fixed(const Fixed & src);
	~Fixed(void);

	Fixed & operator=(const Fixed & rhs);

	int getRawBits(void) const;
	void setRawBits(const int raw);
	int toInt(void) const;
	float toFloat(void) const;
	friend std::ostream& operator<<(std::ostream& o, const Fixed& rhs);
	
	bool operator>(const Fixed &nbr);
	bool operator<(const Fixed &nbr);
	bool operator<=(const Fixed &nbr);
	bool operator>=(const Fixed &nbr);
	bool operator==(const Fixed &nbr);
	bool operator!=(const Fixed &nbr);
	Fixed operator+(const Fixed &nbr);
	Fixed operator-(const Fixed &nbr);
	Fixed operator*(const Fixed &nbr);
	Fixed operator/(const Fixed &nbr);
	Fixed &operator++(void);
	Fixed operator++(int);
	Fixed &operator--(void);
	Fixed operator--(int);
	static Fixed& min(Fixed &a, Fixed &b);
	static const Fixed& min(const Fixed &a, const Fixed &b);
	static Fixed& max(Fixed &a, Fixed &b);
	static const Fixed& max(const Fixed &a, const Fixed &b);
};
#endif