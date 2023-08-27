#include <iostream>
#include <string>
using namespace std;

int main() {
	string spword;
	
	while(true) {
		getline(cin, spword);
		
		if(spword == "") break;
		
		cout << spword << endl;
	}
	
	return 0;
}
