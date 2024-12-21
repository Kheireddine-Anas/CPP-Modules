#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
	private:
		std::string _name;
		AMateria *_inventory[4];

	public:
		Character();
		Character( Character const &other );
		Character& operator=( Character const &other );
		virtual ~Character();

		Character( std::string const &name );
		std::string const &getName() const;
		void equip( AMateria* m ) {};
		void unequip( int idx ) {};
		void use( int idx, ICharacter& target ) {};

};


#endif