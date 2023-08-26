#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	string word;
	cin >> num;
	
	while(num--) {
		cin >> word;
		cout << word[0] << word[word.size()-1] << endl;
	}
	
	return 0;
}
