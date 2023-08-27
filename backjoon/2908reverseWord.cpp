#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string wordA, wordB;
	cin >> wordA >> wordB;
	
	string rewordA = wordA;
	reverse(rewordA.begin(), rewordA.end());
	string rewordB = wordB;
	reverse(rewordB.begin(), rewordB.end());
	
	if(rewordA > rewordB)
		cout << rewordA;
	else
		cout << rewordB;
	
	return 0;
}
