/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 02:16:44 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/14 18:56:31 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPointValue(0) {
}

Fixed::Fixed(const int n) {
	this->_fixedPointValue = n << this->_fractionalBits;
}

Fixed::Fixed(const float n) {
	this->_fixedPointValue = roundf(n * (1 << this->_fractionalBits));
}

Fixed::Fixed(const Fixed & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void) {
}

Fixed & Fixed::operator=(const Fixed & rhs) {
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPointValue = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}

int Fixed::toInt(void) const {
	return this->_fixedPointValue >> this->_fractionalBits;
}

float Fixed::toFloat(void) const {
	return (float)this->_fixedPointValue / (float)(1 << this->_fractionalBits);
}

bool Fixed::operator>(const Fixed &nbr) {
	return this->_fixedPointValue > nbr.getRawBits();
}

bool Fixed::operator<(const Fixed &nbr) {
	return this->_fixedPointValue < nbr.getRawBits();
}

bool Fixed::operator<=(const Fixed &nbr) {
	return this->_fixedPointValue <= nbr.getRawBits();
}

bool Fixed::operator>=(const Fixed &nbr) {
	return this->_fixedPointValue >= nbr.getRawBits();
}

bool Fixed::operator==(const Fixed &nbr) {
	return this->_fixedPointValue == nbr.getRawBits();
}

bool Fixed::operator!=(const Fixed &nbr) {
	return this->_fixedPointValue != nbr.getRawBits();
}

Fixed Fixed::operator+(const Fixed &nbr) {
	return Fixed( this->toFloat() + nbr.toFloat() );
}

Fixed Fixed::operator-(const Fixed &nbr) {
	return Fixed( this->toFloat() - nbr.toFloat() );
}

Fixed Fixed::operator*(const Fixed &nbr) {
	return Fixed ( this->toFloat() * nbr.toFloat() );
}

Fixed Fixed::operator/(const Fixed &nbr) {
	return Fixed ( this->toFloat() / nbr.toFloat() );
}

// pre-increment
Fixed &Fixed::operator++(void)
{
	this->_fixedPointValue += 1;
	return *this;
}

// post-increment
Fixed Fixed::operator++(int)
{
	// copy before increment
	Fixed tmp(this->_fixedPointValue * toFloat());
	this->_fixedPointValue += 1;
	return tmp;
}

// pre-decrement
Fixed &Fixed::operator--(void)
{
	this->_fixedPointValue -= 1;
	return *this;
}

// post-decrement
Fixed Fixed::operator--(int)
{
	Fixed tmp(this->_fixedPointValue * toFloat());
	this->_fixedPointValue -= 1;
	return tmp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

std::ostream& operator<<(std::ostream& o, const Fixed& rhs)
{
	o << rhs.toFloat();
	return o;
}