#include <iostream>

class Contacts {
	private:
		std::string name;
		int number;
		std::string darkSecrect;
	public:
		void set(std::string nm, int n, std::string drk) {
			name = nm;
			number = n;
			darkSecrect = drk;
		}
		void prt() {
			std::cout << name << "\n" << number << "\n" << darkSecrect << std::endl;
		}
};

int main()
{
	Contacts cnt;
	cnt.set("GOLDER", 22266, "HANDER");
	cnt.prt();
	return 0;
}