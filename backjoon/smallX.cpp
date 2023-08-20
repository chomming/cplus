#include <iostream>

int main() {
	int N, X;
	int arr[10000];
	
	std::cin >> N >> X;
	
	for(int i=0; i<N; i++) {
		std::cin >> arr[i];
		
		if(arr[i] < X) {
			std::cout << arr[i] << " ";
		}
	}
}
