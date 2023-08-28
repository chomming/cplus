#include <iostream>
#include <string>
using namespace std;

int main() {
	int rechess[6] = {1, 1, 2, 2, 2, 8};
	int fichess[6];
	
	for(int i=0; i<6; i++) {
		cin >> fichess[i];
		cout << rechess[i] - fichess[i] << endl;
	}
	
	return 0;
}
