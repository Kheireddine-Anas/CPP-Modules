#include "Span.hpp"

Span::Span() : maxSize(0) {}

Span::Span( unsigned int N ) : maxSize(N){}

Span::Span( const Span& other ) : maxSize(other.maxSize), numbers(other.numbers) {}

Span& Span::operator=( const Span& other ) {
	if (this != &other) {
		maxSize = other.maxSize;
		numbers = other.numbers;
	}

	return *this;
}

Span::~Span() {}

void Span::addNumber( int nbr ) {
	if (nbr == INT_MAX || nbr == INT_MIN) {
		throw std::out_of_range("\033[31mNumber is out of range (overflow risk)!\033[0m");
	}
	if (numbers.size() >= maxSize) {
		throw std::out_of_range("\033[31mSpan is full!\033[0m");
	}

	numbers.push_back(nbr);
}

int Span::shortestSpan() const {
	if (numbers.size() < 2) {
		throw std::logic_error("\033[31mNo span founded!\033[0m");
	}
	std::vector<int> sorted = numbers;
	std::sort(sorted.begin(), sorted.end());
	int minSpan = sorted[1] - sorted[0];
	for(size_t i = 2; i < sorted.size(); i++) {
		int spn = sorted[i] - sorted[i - 1];
		if (spn < minSpan) minSpan = spn;
	}
	return minSpan;
}

int Span::longestSpan() const {
	if (numbers.size() < 2) {
		throw std::logic_error("\033[31mNo span founded!\033[0m");
	}
	std::vector<int> sorted = numbers;
	std::sort(sorted.begin(), sorted.end());
	return sorted.back() - sorted.front();
}