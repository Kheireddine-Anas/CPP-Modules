/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:01:04 by akheired          #+#    #+#             */
/*   Updated: 2024/11/04 15:17:45 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int int_value) {
	std::cout << "Int constructor called" << std::endl;
	fixed_point = int_value << frac_bit;
}

Fixed::Fixed(const float float_value) {
	std::cout << "Float constructor called" << std::endl;
	fixed_point = roundf(float_value * (1 << frac_bit));
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

	Fixed& Fixed::operator=(const Fixed &other) {
		std::cout << "Copy assignment operator called" << std::endl;
		if (this != &other)
			this->fixed_point = other.fixed_point;

		return *this;
	}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return fixed_point;
}

void Fixed::setRawBits(int const raw) {
	fixed_point = raw;
}

float Fixed::toFloat( void ) const {
	return static_cast <float>(fixed_point) / (1 << frac_bit);
}

int Fixed::toInt( void ) const {
	return fixed_point >> frac_bit;
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}