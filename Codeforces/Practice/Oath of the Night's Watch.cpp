#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main() {
	vector<int> stewards;
	
	int n;
	int t = 0;
	int input = 0;
	int min;
	int max;
	
	cin >> n;
	
	for(int i = 0; i < n; i ++) {
		cin >> input;
		stewards.push_back(input);
	}
	
	//calculate int
	min = stewards[0];
	for(int k = 0; k < n; k ++) {
		if(stewards[k] < min) {
			min = stewards[k];
		}
	}
	
	
	max = stewards[0];
	for(int l = 0; l < n; l ++) {
		if(stewards[l] > max) {
			max = stewards[l];
		}
	}
	
	for(int j = 0; j < n; j++) {
		if(min < stewards[j] && max > stewards[j]) {
			t ++;
		}
	}
	
	cout << t << "\n";
	
	
	
	return 0;
}
