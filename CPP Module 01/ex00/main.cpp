#include "Zombie.hpp"

int main() {
	// Heap allocation
	Zombie* Miner = newZombie("Ma9La");
	Miner->announce();
	delete Miner;

	//Stack allocation
	randomChump("SKN");
}