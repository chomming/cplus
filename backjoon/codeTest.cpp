#include <iostream>

int main() {
	int N;
	
	std::cin >> N;
	
	if(N%4 == 0) {
		int r = N/4;
		for (int i=0; i<r; i++) {
			std::cout << "long ";
		}
	}
	
	std::cout << "int" << std::endl;
		
	return 0;
}
