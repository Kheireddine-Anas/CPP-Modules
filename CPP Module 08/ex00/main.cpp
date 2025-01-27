#include "easyfind.hpp"
#include <vector>
#include <list>

int main() {
	int arr[] = {1, 2, 3, 4, 5};
	int ls[] = {5, 15, 25, 35, 45};

	std::vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
	std::list<int> lst(ls, ls + sizeof(ls) / sizeof(ls[0]));
	// std::vector<int> vec = {1, 2, 3, 4, 5}; 
	// std::list<int> lst = {5, 15, 25, 35, 45}; 

	try {
		std::vector<int>::iterator it = easyfind(vec, 5);
		std::cout << "Value found in Vector: " << *it << std::endl;
	} catch ( std::exception& e ) {
		std::cout << "Exception caught for vector: " << e.what() << std::endl;
	}

	try {
		std::vector<int>::iterator it = easyfind(vec, 58);
		std::cout << "Value found in List: " << *it << std::endl;
	} catch ( std::exception& e ) {
		std::cout << "Exception caught for list: " << e.what() << std::endl;
	}

	return 0;
}
