#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal {
	public:
		Cat();
		~Cat();
		Cat( const Cat& other);
		Cat& operator=( const Cat& other );

		void makeSound() override;
};



#endif