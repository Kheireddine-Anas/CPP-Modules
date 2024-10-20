#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie* Crowd = new Zombie[N];
	for (int i = 0; i < N; i++)
		Crowd[i].set_name(name);
	return Crowd;
}