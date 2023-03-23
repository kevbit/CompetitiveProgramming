#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
	int t;
	int n;
	
	cin >> t;
	//begin the test cases
	for(int i = 0; i < t; i ++) {
		cin >> n;
		int array[n];
		int input;

		for(int j = 0; j < n; j ++) {
			cin >> input;
			array[j] = input;
		}

		int* it;
		it = max_element(array, array + n);
		int maxElement = *it;

		int maxCount = 0;
		int minCount = 0;

		it = min_element(array, array + n);
		int minElement = *it;


		for(int k = 0; k < n; k ++) {
			if(array[k] == maxElement) {
				maxCount ++;
			}
			else if (array[k] == minElement) {
				minCount ++;
			}
		}
		int numPairs;

		if(maxElement == minElement) {
			numPairs = 0;
			cout << numPairs << "\n";	
		}
		else {
			numPairs = (maxCount * minCount) * 2;
			cout << numPairs << "\n";
		}
		

	}


	return 0;
}
