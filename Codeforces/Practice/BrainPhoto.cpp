#include <bits/stdc++.h>

using namespace std;


int main() {
	int n;
	int m;
	bool isColor = false;
	string pixel;

	cin >> n;
	cin >> m;

	int total = n * m;

	for(int i = 0; i < total; i ++) {
		cin >> pixel;
		if(pixel == "B" || pixel == "W" || pixel == "G") {

		}
		else {
			isColor = true;
		}
	}

	if(isColor == true) {
		cout << "#Color" << "\n";
	}
	else {
		cout << "#Black&White" << "\n";
	}



	return 0;
}
