// #include <iostream>

// int main() {
// 	std::string command;
	
// 	while (1){
// 		getline(std::cin, command);
// 		if (command == "fol")
// 			break;
// 	}
// }
#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Use push_back to add elements one by one in C++98
  vector<string> cars;
  cars.push_back("Volvo");
  cars.push_back("BMW");
  cars.push_back("Ford");
  cars.push_back("Mazda");
  
  // Loop through the vector and print each car
  for (int i = 0; i < static_cast<int>(cars.size()); i++) {
    cout << cars[i] << "\n";
  }
  
  return 0;
}
