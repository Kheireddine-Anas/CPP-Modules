#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    // Array of animals
    Animal* animals[4];
    for (int k = 0; k < 2; ++k) {
		animals[k] = new Dog();
		std::cout << "---------------" << std::endl;
	}

    for (int k = 2; k < 4; ++k) {
        animals[k] = new Cat();
	}

	std::cout << "****************" << std::endl;
    for (int k = 0; k < 4; ++k) {
        delete animals[k];
	}

	std::cout << "****************" << std::endl;

    // Deep copy
    Dog originalDog;
    Dog copiedDog = originalDog; // Calls Dog copy constructor

    return 0;
}
