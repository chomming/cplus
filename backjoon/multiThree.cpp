#include <iostream>
#include <string>

int main() {
	int A;
	int B;
	
	std::cin >> A;
	std::cin >> B;
	
	std::cout << A * (B%10) << std::endl;
	std::cout << A * ((B/10)%10) << std::endl;
	std::cout << A * (B/100) << std::endl;
	std::cout << A * B << std::endl;		

	return 0;
}
