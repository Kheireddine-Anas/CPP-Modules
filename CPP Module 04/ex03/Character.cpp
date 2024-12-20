#include "Character.hpp"

Character::Character() {
	_name = "Default";
	for (int i=0; i < 0; i++)
		_inventory[i] = NULL;
}

Character::Character( Character const &other ) : _name(other._name) {
	for (int i=0; i < 0; i++)
		_inventory[i] = other._inventory[i] ? other._inventory[i]->clone() : NULL;
}

Character &Character::operator=( Character const &other ) {
	if (this != &other) {
		_name = other._name;
		for (int i=0; i < 4; i++) {
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = other._inventory[i] ? other._inventory[i]->clone() : NULL;
		}
	}
	return *this;
}

Character::~Character() {
	for (int i=0; i < 4; i++)
		if (_inventory[i] != NULL) {
			delete _inventory[i];
		}
}

Character::Character( std::string const &name ) : _name(name) {
	for (int i=0; i < 0; i++)
		_inventory[i] = NULL;
}

std::string const &Character::getName() {
	return _name;
}

void Character::equip( AMateria* m ) {
	for (int i=0; i < 4; i++) {
		if (!_inventory[i]) {
			_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip( int idx ) {
	if (idx >= 0 && idx < 4)
		_inventory[idx] = NULL;
}

void Character::use( int idx, ICharacter& target ) {
	if (idx >= 0 && idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}