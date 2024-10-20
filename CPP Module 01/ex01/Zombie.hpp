#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private:
		std::string name;
	public:
	Zombie();
	Zombie(std::string nm);
	~Zombie(void);
	void announce(void);
	void set_name(std::string nm1);
};

Zombie* zombieHorde( int N, std::string name );

#endif