#include <iostream>

int main() {
	int A, B, C;
	
	std::cin >> A >> B;
	std::cin >> C;
	
	int endMin = (B+C) % 60;
	int endHour = (A+(B+C)/60) % 24;
	
	std::cout << endHour << " " << endMin << std::endl;
	
	return 0;
}
