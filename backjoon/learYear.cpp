#include <iostream>
#include <string>

int main() {
	int A;
	
	std::cin >> A;

	if (A%4 == 0 && A%100 != 0) {
		std::cout << "1" << std::endl;
	} else if (A%400 == 0) { 
		std::cout << "1" << std::endl;
	} else {
		std::cout << "0" << std::endl;
	}
	return 0;
}
