#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

int main () {
	string inputString;
	string instructionString;
	int position = 0;
	
	cin >> inputString;
	cin >> instructionString;
	
	for(int i = 0; i < (int) instructionString.length(); i ++) {
		if(inputString[position] == instructionString[i]) {
			position ++;
		}
	}
	cout << position + 1;
	
	
	return 0;
}
