#include <iostream>

int main() {
	int N, v;
	int arr[101];
	
	std::cin >> N;
	
	for(int i=0; i<N; i++) { 
		std::cin >> arr[i];
	}
	
	std::cin >> v;
	
	int res = 0;
	
	for(int i=0; i<N; i++) {
		if(arr[i] == v)
			res++;
	}
	
	std::cout << res;
}
