#include "ScalarConverter.hpp"
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "\033[31mUsage: ./convert <literal>\033[0m" << std::endl;
        return 1;
    }
    ScalarConverter::convert(argv[1]);
    return 0;
}
