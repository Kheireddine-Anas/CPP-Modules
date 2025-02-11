#include "BitcoinExchange.hpp"

int main(int ac, char** av) {
	if (ac != 2) {
		std::cout << "Usage: " << av[0] << " <input_file>" << std::endl;
		return 1;
	}
	BitcoinExchange btc("data.csv");
	btc.processInput(av[1]);
}