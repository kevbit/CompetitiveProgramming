#include <bits/stdc++.h>

using namespace std;

int main() {

	string shift;
	string sequence;

	string output = "";

	cin >> shift;
	cin >> sequence;
	int length = sequence.length();

	string keyboard ="qwertyuiopasdfghjkl;zxcvbnm,./";
	int keyboardIndex;
	string letter;

	if(shift == "R") {
		for(int i = 0; i < length; i ++) {
			keyboardIndex = keyboard.find(sequence[i]);
				if(keyboardIndex > 0) {
					keyboardIndex --;
					output += keyboard[keyboardIndex];
			}
		}

	}
	else {
		for(int j = 0; j < length; j ++) {
			keyboardIndex = keyboard.find(sequence[j]);
				if(keyboardIndex < 29) {
					keyboardIndex ++;
					output += keyboard[keyboardIndex];
			}
		}


	}

	cout << output << "\n";


	return 0;
}


