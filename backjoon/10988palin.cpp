#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string alpha;
	cin >> alpha;
	
	string realpha = alpha;
	reverse(realpha.begin(), realpha.end());
	
	if(alpha == realpha) {
		cout << 1;
	} else {
		cout << 0;
	}

	return 0;
}
