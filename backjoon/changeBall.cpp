#include <iostream>
using namespace std;

int main() {
	int N, M, temp;
	int start, end;
	
	cin >> N >> M;
	int box[N];
	
	for(int i=0; i<N; i++) {	
		box[i] = i+1;
	}
	
	for(int i=0; i<M; i++) {
		cin >> start >> end;
		
		temp = box[start-1];
		box[start-1] = box[end-1];
		box[end-1] = temp;
	}
	
	for(int i=0; i<N; i++) {
		cout << box[i] << " ";
	}
	
	return 0;
}
