#include <iostream>

int main() {
	int arr[9];
	int max = 0;
	int index = 0;
	
	for(int i=0; i<9; i++) {
		std::cin >> arr[i];
		
		if(max < arr[i]) {
			max = arr[i];
			index = i;
		} 
	}
	
	std::cout << max << std::endl << index+1;
	
	return 0;
}
