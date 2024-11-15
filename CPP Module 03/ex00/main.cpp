#include "ClapTrap.hpp"

int main() {
    ClapTrap clap1("FPL-54");
    ClapTrap clap2("AIR-16");

    clap1.attack(clap2);

    clap2.takeDamage(5);
    clap2.beRepaired(3);

    for (int i = 0; i < 10; ++i) {
        clap1.attack(clap2);
    }

    return 0;
}
