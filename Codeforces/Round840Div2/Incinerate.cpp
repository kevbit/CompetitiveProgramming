#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	int n;
	int k;
	int h;
	int p;
	cin >> t;

	for(int i = 0; i < t; i ++) {
		cin >> n, k;
		int health[n];
		int power[n];
		int tempmax;
		int newmax;

		for(int j = 0; j < n; j ++) {
			if(j == 0) {
				cin >> h;
				health[j] = h;
				newmax = h;
			}
			else {
				cin >> h;
				health[j] = h;
				if(h > newmax) {
					newmax = h;
				}
			}
		}


		for(int k = 0; k < n; k ++) {
			cin >> p;
			health[k] = p;
		}

		int divnum = newmax / k;

		for(int q = 0; q < divnum; q ++) {
			for(int l = 0; l < divnum; l ++) {


		
			}		
		}

		cout << "NO" << "\n";

	}
	return 0;



}
