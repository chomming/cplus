#include <iostream>

int main() {
	int X, N, a, b;
	int total=0;
	
	std::cin >> X;
	std::cin >> N;
	
	for(int i=0; i<N; i++) {
		std::cin >> a >> b;
		total += a*b;
	}
	
	if(X == total) {
		std::cout << "Yes" << std::endl;
	} else {
		std::cout << "No" << std::endl;
	}
		
	return 0;
}
