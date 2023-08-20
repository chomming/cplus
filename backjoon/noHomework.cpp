#include <iostream>
using namespace std;
	
int main() {	

	int attNum[31] = {0, };
	int n;
	
	for(int i=0; i<28; i++) {
		cin >> n;
		attNum[n] = 1;
	}
	
	for(int i=1; i<=30; i++) {
		if(!attNum[i]) {
			cout << i << endl;
		}
	}
	
	return 0;
}
