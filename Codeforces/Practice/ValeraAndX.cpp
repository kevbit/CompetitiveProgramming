#include <bits/stdc++.h>

using namespace std;

#define for_n(i, n) for(int i = 0; i < n; i ++)


int main() {
	int n;
	cin >> n;
	bool isX = true;
	int l = 0;
	string chosenOne;
	char lesserOne;

	for_n(i, n) {
		string input;
		cin >> input;

		if(i == 0) {
			chosenOne = input[0];
			lesserOne = input[1];
		}
		if(input[l] == input[n - l - 1]) {
		}
		else {
		isX = false;
		}

		int otherNum = n - l - 1;
		set<char> letters;

		for(int k = 0; k < n; k ++) {
			if(k != l && k != otherNum) {
				letters.insert(input[k]);
			}
		}

		int lettersSize = letters.size();
		if(lettersSize != 1) {
			isX = false;
		}
		else if (lettersSize == 1) {
			auto it = letters.begin();
			char setElem = *it;
			if(setElem != lesserOne) {
				isX = false;
			}
		}
		l++;
	}

	if(isX == false) {
		cout << "NO" << "\n";
	}
	else {
		cout << "YES" << "\n";
	}



	return 0;
}
