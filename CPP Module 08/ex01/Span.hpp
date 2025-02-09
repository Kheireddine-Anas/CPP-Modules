#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>
#include <climits>

class Span {
	private:
		unsigned int maxSize;
		std::vector<int> numbers;

	public:

		Span();
		Span( unsigned int N );
		Span( const Span& other );
		Span& operator=( const Span& other );
		~Span();

		void addNumber( int nbr );

		template <typename Iterator>
		void addNumbers( Iterator begin, Iterator end ) {
			if (numbers.size() + std::distance(begin, end) > maxSize) {
				throw std::out_of_range("\033[31mAdding this range will exceed the Span's capacity!\033[0m");
			}

			for(Iterator i = begin; i != end; ++i ) {
				if (*i >= INT_MAX || *i <= INT_MIN) {
					throw std::out_of_range("\033[31mNumber is out of range (overflow risk)!\033[0m");
				}
			}

			numbers.insert(numbers.end(), begin, end);
		};

		int shortestSpan() const ;
		int longestSpan() const ;

};

#endif