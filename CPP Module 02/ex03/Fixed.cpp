#include "Fixed.hpp"

Fixed::Fixed() : fixed_point(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int int_value) {
	// std::cout << "Int constructor called" << std::endl;
	fixed_point = int_value << frac_bit;
}

Fixed::Fixed(const float float_value) {
	// std::cout << "Float constructor called" << std::endl;
	fixed_point = roundf(float_value * (1 << frac_bit));
}

Fixed::Fixed(const Fixed& other) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed &other) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->fixed_point = other.fixed_point;

	return *this;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	// std::cout << "getRawBits member function called" << std::endl;
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

bool Fixed::operator>( const Fixed& other ) {
	return this->fixed_point > other.fixed_point;
}

bool Fixed::operator<( const Fixed& other ) {
	return this->fixed_point < other.fixed_point;	
}

bool Fixed::operator>=( const Fixed& other ) {
	return this->fixed_point >= other.fixed_point;	
}

bool Fixed::operator<=( const Fixed& other ) {
	return this->fixed_point <= other.fixed_point;	
}

bool Fixed::operator==( const Fixed& other ) {
	return this->fixed_point == other.fixed_point;
}

bool Fixed::operator!=( const Fixed& other ) {
	return this->fixed_point != other.fixed_point;
}

Fixed Fixed::operator+( const Fixed &other ) {
	Fixed tmp( this->toFloat() + other.toFloat() );
	return tmp;
}

Fixed Fixed::operator-( const Fixed &other ) {
	Fixed tmp( this->toFloat() - other.toFloat() );
	return tmp;
}

Fixed Fixed::operator*( const Fixed &other ) {
	Fixed tmp( this->toFloat() * other.toFloat() );
	return tmp;
}

Fixed Fixed::operator/( const Fixed &other ) {
	Fixed tmp( this->toFloat() / other.toFloat() );
	return tmp;
}

Fixed& Fixed::operator++() {
	this->fixed_point += 1;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp;
	tmp.fixed_point = this->fixed_point++;
	return tmp;
}

Fixed& Fixed::operator--() {
	this->fixed_point--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed tmp;

	tmp.fixed_point = this->fixed_point--;
	return tmp;
}

Fixed& Fixed::min(Fixed& x, Fixed& y) {
	return (x.getRawBits() < y.getRawBits()) ? x : y;
}

const Fixed& Fixed::min(const Fixed& x, const Fixed& y) {
	return (x.getRawBits() < y.getRawBits()) ? x : y;	
}

Fixed& Fixed::max(Fixed& x, Fixed& y) {
	return (x.getRawBits() > y.getRawBits()) ? x : y;
}

const Fixed& Fixed::max(const Fixed& x, const Fixed& y) {
	return (x.getRawBits() > y.getRawBits()) ? x : y;
}
