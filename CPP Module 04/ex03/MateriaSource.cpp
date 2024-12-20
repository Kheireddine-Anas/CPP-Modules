#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i=0; i < 4; i++) {
		_Materias[i] = NULL;
	}
}

MateriaSource::MateriaSource( MateriaSource const &other ) {
	for (int i=0; i < 4; i++) {
		_Materias[i] = other._Materias[i] ? other._Materias[i]->clone() : NULL;
	}
}

MateriaSource::MateriaSource( MateriaSource const &other ) {
	if (this != &other) {
		for (int i=0; i < 4; i++) {
			delete _Materias[i];
			_Materias[i] = other._Materias[i] ? other._Materias[i]->clone() : NULL;
	}
	}
}

MateriaSource::~MateriaSource() {
	for (int i=0; i < 4; i++) {
		delete _Materias[i];
	}
}

void MateriaSource::learnMateria( AMateria* m ) {
	for (int i=0; i < 4; i++) {
		if (!_Materias[i]) {
			_Materias[i] = m;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria( std::string const & type ) {
	for (int i=0; i < 4; i++) {
		if (_Materias && _Materias[i]->getType() == type)
			return _Materias[i]->clone();
	}
	return 0;
}