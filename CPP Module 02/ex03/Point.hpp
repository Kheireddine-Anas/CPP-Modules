#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point {
	private:
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(Fixed( const float x_value ), Fixed( const float y_value ));
		Point( const Point& other);
		Point& operator=( const Point& other );
		~Point();

		bool bsp( Point const a, Point const b, Point const c, Point const point );
};


#endif