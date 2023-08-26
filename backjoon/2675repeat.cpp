#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	cin >> num;
	
	for(int i=0; i<num; i++) {
		int repeat;
		string test;
		cin >> repeat >> test;
		
		for(int j=0; j<test.length(); j++) {
			for(int k=0; k<repeat; k++) {
				cout << test[j];
			}
		}
		
		cout << endl;
	}
	
	return 0;
}
