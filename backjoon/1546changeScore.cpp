#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int num;
	double score;
	double sum;
	cin >> num;
	
	double max_score=0;
	double total_score=0;

	for(int i=0; i<num; i++) {
		cin >> score;
		
		max_score = max(max_score, score);
		total_score += score;
	}
	
	sum = (total_score/max_score)*100/num;
	cout << sum;
	
	return 0;
}
