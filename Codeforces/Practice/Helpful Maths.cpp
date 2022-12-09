#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

int main() {
	string inputString;
	vector<int> inputArray;
	
	cin >> inputString;
	
	int length = inputString.length();
	
	for(int i = 0; i < length; i++) {
		if(inputString[i] == '1') {
			inputArray.push_back(1);
		}
		else if(inputString[i] == '2') {
			inputArray.push_back(2);
		}
		else if (inputString[i] == '3') {
			inputArray.push_back(3);
		}
		else {
		}
	}
	
	int arraySize = inputArray.size();
	
	for(int j = 0; j < arraySize; j ++ ) {
		for(int k = j; k < arraySize; k ++) {
			if(inputArray[j] > inputArray[k]) {
				swap(inputArray[j], inputArray[k]);
			}
		}
	} 
	
	for(int l = 0; l < arraySize; l ++) {
		if(l == arraySize - 1) {
			cout << inputArray[l];
		}
		else {
			cout << inputArray[l];
			cout << "+";	
		}
	}
	
	
	
	
	return 0;
}
