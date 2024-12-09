#ifndef CURE_HPP
#define CURE_HPP

#include "AMateris.hpp"
#include <iostream>


class Cure : public AMateria {
	public:
		Cure();
		Cure( Cure& const other );
		Cure& operator=( Cure& const other );
		virtual ~Cure();

		AMateria* clone() const;
		void use( ICharacter& target );
};


#endif