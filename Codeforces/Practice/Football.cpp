#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	int team1count = 0;
	int team2count = 0;
	string team1;
	string team2;

	string input;

	cin >> n;
	cin >> team1;
	team1count ++;

	for(int i = 1; i < n; i ++ ) {
		cin >> input;
		if(input != team1) {
			team2count ++;
			team2 = input;
		}
		else {
			team1count ++;
		}
	}

	if(team1count > team2count) {
		cout << team1 << "\n";
	}
	else {
		cout << team2 << "\n";
	}





	return 0;
}
