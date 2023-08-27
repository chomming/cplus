#include <iostream>
#include <string>
using namespace std;

int main() {
	string word;
	getline(cin, word);
	
	int cnt = 0;
	int len = word.length();
	
	for(int i=0; i<len; i++) {
		if(word[i] == ' ') cnt++;
	}
	
	if(word[0] == ' ') cnt--;
	if(word[len-1] == ' ') cnt--;
	
	cout << cnt+1;
		
	return 0;
}
