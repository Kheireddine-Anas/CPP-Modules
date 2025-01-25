#include "iter.hpp"

void increment( int& i) {
	i++;
}

int main() {
	int arr[] = {5, 7, 8, 9, 0};
	size_t size = sizeof(arr) / sizeof(arr[0]);

	iter(arr, size, printElem);
	std::cout << std::endl;

	iter(arr, 5, increment);
	iter(arr, size, printElem);
	std::cout << std::endl;

	std::string strs[] = {"Finder", "Alloc", "c++"};
	size_t sz = sizeof(strs) / sizeof(strs[0]);
	iter(strs, sz, printElem);
	std::cout << std::endl;
}