/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:01:04 by akheired          #+#    #+#             */
/*   Updated: 2024/11/01 12:01:37 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0) {
	std::cout << "Default constructor called" << std::endl;
} 

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

	Fixed& Fixed::operator=(const Fixed &other) {
		std::cout << "Copy assignment operator called" << std::endl;
		if (this != &other)
			this->fixed_point = other.getRawBits();

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
