#ifndef CURE_HPP
#define CURE_HPP

#include "AMateris.hpp"
#include <iostream>


class Cure : public AMateria {
	public:
		Cure();
		Cure( Cure& const other );
		Cure operator=( Cure& const other );
		virtual ~Cure();

		Cure( std::string name );
		Cure clone();
		void use( ICharacter& target );
};


#endif