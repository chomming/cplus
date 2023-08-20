#include <iostream>
using namespace std;

int main() {
	int N, M;
	int start, end, num;
	int box[101] = { 0, };
	
	cin >> N >> M;
	
	for(int i=1; i<=M; i++) {	
		cin >> start >> end >> num;
		
		for(int j=start; j<=end; j++) {
			box[j] = num;
		}
	}
	
	for(int i=1; i<=N; i++) {
		cout << box[i] << " ";
	}
	
	return 0;
}
