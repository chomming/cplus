#include <iostream>

int main() {
	int A, B, C;
	
	std::cin >> A >> B >> C;
	
	if (A == B && B == C) {
		std::cout << 10000 + A*1000 << std::endl;
	} else if (A != B && B != C && A != C) {
		int maxNum = A;
		if (B > maxNum) {
			maxNum = B;
		} 
		if (C > maxNum) {
			maxNum = C;
		}

		std::cout << maxNum*100 << std::endl;
	} else {
		if (A == B) {
			std::cout << 1000 + A*100 << std::endl;
		} else if (B == C) {
			std::cout << 1000 + B*100 << std::endl;
		} else if (A == C) {
			std::cout << 1000 + C*100 << std::endl;
		}
	}
	return 0;
}
