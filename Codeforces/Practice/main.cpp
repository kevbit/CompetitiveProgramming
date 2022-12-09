#include <iostream>
#include <cstdlib>
#include <string.h>


using namespace std;

int main() {
	int n;
	int s;
	int d;
	int tempMax = 0;
	int turn = 0;
	int maxElement = 0;

	cin >> n;

	int cards[n];

	for(int i = 0; i < n; i ++) {
		cin >> cards[i];
	}

	for(int j = 0; j < n; j ++) {
		tempMax = 0;
		for (int k = 0; k < n; k ++) {
			if(cards[k] > tempMax) {
				tempMax = cards[k];
				maxElement = k;
			}
		}
		cards[maxElement] = 0;
		if(turn == 0) {
			s += tempMax;
			turn = 1;
		}
		else {
			d += tempMax;
			turn = 0;
		}
	}

	cout << s << " " << d;

	return 0;
}

