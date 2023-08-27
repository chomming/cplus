#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
	int dial[26] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
	int sum =0;
	string alpha;
	cin >> alpha;
	
	for(int i=0; i<alpha.length(); i++) {
		int input = alpha[i] - 65;
		sum += dial[input];
	}
	
	cout << sum;
	
	return 0;
}
