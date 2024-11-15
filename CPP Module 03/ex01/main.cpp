#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap clap("Clappy");
    clap.attack("enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "---------------------------------" << std::endl;

    ScavTrap scav("Scavy");
    scav.attack("target");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    std::cout << "---------------------------------" << std::endl;

    ScavTrap scavCopy(scav);
    scavCopy.attack("another target");

    std::cout << "---------------------------------" << std::endl;

    ScavTrap scavAssigned;
    scavAssigned = scav;
    scavAssigned.guardGate();

    return 0;
}