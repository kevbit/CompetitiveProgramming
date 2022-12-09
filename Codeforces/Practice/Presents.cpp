#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int n;
	int p;
	int friendGift;
	int counter;
	vector<int> gifts;
	vector<int> newGifts;
	
	cin >> n;
	
	for(int i = 0; i < n; i ++) {
		cin >> p;
		gifts.push_back(p);
	}
	newGifts = gifts;
	for(int j = 0; j < n; j ++) {
		friendGift = gifts[j] - 1;
		counter = j + 1;
		newGifts[friendGift] = counter;
	}
	for(int k = 0; k < n; k ++) {
		cout << newGifts[k] << " ";
	}
	cout << '\n';
	
	
	
	
	
	return 0;
}
