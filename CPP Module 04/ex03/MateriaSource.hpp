#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : IMateriaSource {
	private:
		AMateria* _Materias[4];
	public:
		MateriaSource();	
		MateriaSource( MateriaSource const &other );	
		MateriaSource& operator=( MateriaSource const &other );	
		virtual ~MateriaSource();

		void learnMateria( AMateria* m );
		AMateria* createMateria( std::string const & type );
};



#endif