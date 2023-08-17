#include <iostream>
#include <string>

int main() {
	int A;
	int B;
	int C;
	
	std::cin >> A;
	std::cin >> B;
	std::cin >> C;
	
	std::cout << (A+B) % C << std::endl;
	std::cout << ((A%C) + (B%C)) % C << std::endl;
	std::cout << (A*B) % C << std::endl;
	std::cout << ((A%C) * (B%C) % C) << std::endl;

	return 0;
}
