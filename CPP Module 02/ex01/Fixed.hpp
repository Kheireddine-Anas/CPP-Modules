/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:01:07 by akheired          #+#    #+#             */
/*   Updated: 2024/11/04 11:22:20 by akheired         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int fixed_point;
		static const int frac_bit = 8;
	public:
		Fixed();
		Fixed( const int int_value );
		Fixed( const float float_value );
		Fixed( const Fixed& cp_fix );
		Fixed& operator=(const Fixed &other);
		~Fixed();
		
		float toFloat( void ) const;
		int toInt( void ) const;
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream& operator<<(std::ostream& out, Fixed const &fixed);

#endif
