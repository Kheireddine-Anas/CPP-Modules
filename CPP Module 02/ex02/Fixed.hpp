/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akheired <akheired@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:01:07 by akheired          #+#    #+#             */
/*   Updated: 2024/11/07 07:13:29 by akheired         ###   ########.fr       */
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
		~Fixed();
		Fixed( const int int_value );
		Fixed( const Fixed& cp_fix );
		Fixed( const float float_value );
		Fixed& operator=(const Fixed &other);
		
		bool operator>( const Fixed& other );
		bool operator<( const Fixed& other );
		bool operator>=( const Fixed& other );
		bool operator<=( const Fixed& other );
		bool operator==( const Fixed& other );
		bool operator!=( const Fixed& other );
		
		Fixed operator+( const Fixed &other );
		Fixed operator-( const Fixed &other );
		Fixed operator*( const Fixed &other );
		Fixed operator/( const Fixed &other );

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		
		int toInt( void ) const;
		float toFloat( void ) const;
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		
		static Fixed& min( Fixed& x, Fixed& y );
		static const Fixed& min( const Fixed& x, const Fixed& y );
		static Fixed& max( Fixed& x, Fixed& y );
		static const Fixed& max( const Fixed& x, const Fixed& y );
};

std::ostream& operator<<(std::ostream& out, Fixed const &fixed);

#endif
