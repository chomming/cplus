#include <iostream>
#include <string>

int main() {
	int H, M;
	
	std::cin >> H >> M;

	if (M<45) {
		if (H == 0) {
			H = 23;
		} else {
			H -= 1;
		}
		M = 60 - (45-M);
		std::cout << H << " " << M << std::endl;
	} else { 
		M -= 45;
		std::cout << H << " " << M << std::endl;
	}
	
	return 0;
}
