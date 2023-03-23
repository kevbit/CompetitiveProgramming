#include <bits/stdc++.h>

using namespace std;


int main() {

	int n;
	int t;

	cin >> n;
	cin >> t;
	
	if(t != 10) {
		for(int i = 0; i < n; i ++) {
			cout << t;
		}

	}
	else {
		if(n == 1) {
			cout << -1 << "\n";
		}
		else {
			for(int j = 0; j < n - 1; j ++) {
				cout << 1;
			}
			cout << 0 << "\n";
		}
	}

	return 0;
}
