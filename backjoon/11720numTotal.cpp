#include <iostream>
using namespace std;

int main() {
	int num;
	char nonum;
	cin >> num;
	
	int total=0;
	
	for(int i=0; i<num; i++) {
		cin >> nonum;
		
		total += nonum-48;
	}
	
	cout << total;
	
	return 0;
}
