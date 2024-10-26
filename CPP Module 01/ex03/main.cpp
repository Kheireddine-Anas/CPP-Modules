#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

// int main() {
// 	Weapon weapon = Weapon("pan");
// 	HumanA m9l("m9l", weapon);
// 	m9l.attack();
// 	weapon.setType("ma9la");
// 	m9l.attack();
// 	return 0;
// }


int main(){
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
return 0;
}