#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, M;
	int start, end;
	int box[100];
	
	cin >> N >> M;

	for(int i=0; i<N; i++) {
		box[i] = i+1;
	}
	
	for(int i=0; i<M; i++) {
		cin >> start >> end;
		
		reverse(box+start-1, box+end);
	}

	for(int i=0; i<N; i++) {
		cout << box[i] << " ";
	}
	
	return 0;
}
