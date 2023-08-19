#include <iostream>

int main() {
	int T;
	int A, B;
	int i;
	
	std::cin >> T;
	
	for(i=0; i<T; i++) {
		std::cin >> A >> B;
		std::cout << A+B << std::endl;
	}
	
	return 0;
}
