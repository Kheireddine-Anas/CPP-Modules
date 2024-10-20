#include "Zombie.hpp"

int main() {
	int N = 5;

	Zombie* Zombies = zombieHorde(N, "Ma9La");
	
	for (int i = 0; i < N; i++) {
		Zombies[i].announce();
	}
}