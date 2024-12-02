#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;

    // const Animal* animal = new Animal(); // ERROR: Cannot instantiate abstract class

    return 0;
}
