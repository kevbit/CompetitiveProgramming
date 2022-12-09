#include <iostream>
#include <cstdlib>
#include <vector>


using namespace std;

int main() {
	int n = 0;
	int s = 0;
	int d = 0;
	int tempMax = 0;
	int turn = 0;
	int maxElement = 0;
	
	cin >> n;
	
	vector<int> cards(n);
	
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
		if(turn == 0) {
			s += tempMax;
			turn = 1;
		}
		else {
			d += tempMax;
			turn = 0;
		}
		cout << maxElement << "\n";
		cards[maxElement]=0;
	}
	
	cout << s << " " << d;
	
	return 0;
}

