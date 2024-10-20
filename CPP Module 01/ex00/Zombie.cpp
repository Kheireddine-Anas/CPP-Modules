#include "Zombie.hpp"

Zombie::Zombie(std::string nm) : name(nm) {
    // this->name = nm;
    std::cout << "\033[33mZombie: " << this->name << " Created\033[0m" << std::endl;
}

Zombie::~Zombie() {
    std::cout << "\033[31mZombie: " << this->name << " destroyed\033[0m" << std::endl;
}

void Zombie::announce(void){
    std::cout << "\033[32m" << this->name << " : BraiiiiiiinnnzzzZ\033[0m" << std::endl;
}