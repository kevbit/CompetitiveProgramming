#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	int input;
	vector <int> inputVector;
	int max;
	int sum = 0;
	int remainder = 0;
	int count = 0;

	for(int i = 0; i < n; i ++) {
		cin >> input;
		inputVector.push_back(input);
	}

	sort(inputVector.begin(), inputVector.end(), greater<int>());
	for(int k = 0; k < n; k ++) {
		remainder += inputVector[k];
	}

	for(int j = 0; j < n; j ++) {
		if(sum <= remainder) {
			sum += inputVector[j];
			remainder -= inputVector[j];
			count ++;
		}
	}

	cout << count << "\n";
	
	return 0;
}
