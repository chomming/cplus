#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	
	for(int i=1; i<=num; i++) {
		for(int j = num - i; j>0; j--) {
			cout << " ";
		}
		
		for(int j = 2*i-1; j>0; j--) {
			cout << "*";
		}
		
		cout << endl;
	}
	
	for(int i=1; i<num; i++) {
		for(int j=0; j<i; j++) {
			cout << " ";
		}
		
		for(int j= 2*(num-i)-1; j>0; j--) {
			cout << "*";
		}
		
		cout << endl;
	}

	return 0;
}
