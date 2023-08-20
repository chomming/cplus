#include <iostream>
using namespace std;
	
int main() {
	int naNum[10] = {0, };
	int res[10] = {0, };
	int sum=0;
	
	for(int i=0; i<10; i++) {
		cin >> naNum[i];
		
		res[i] = naNum[i] % 42; 
	}
	
	for(int i=0; i<10; i++) {
		bool dupli = false;
		
		for(int j=0; j<i; j++) {
			if(res[i] == res[j]) {
				dupli = true;
				break;				
			}
		}
		
		if(!dupli) {
			sum += 1;
		}
	}

	cout << sum;
		
	return 0;
}
