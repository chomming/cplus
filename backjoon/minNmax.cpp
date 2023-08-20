#include <iostream>

int main() {
	int N;
	int max = -1000001;
	int min = 1000001;
	
	std::cin >> N;
	int arr[N];

	for(int i=0; i<N; i++) {
		std::cin >> arr[i];
		
		if(min > arr[i]) min = arr[i];
		if(max < arr[i]) max = arr[i];
	}
	
	std::cout << min << " " << max;
	
	return 0;
}
