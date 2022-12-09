#include <iostream>
#include <math.h>
#include <map>

using namespace std;

int main() {
	int t;
	int n;
	int num;
	int elimCounter;
	int countMax = 0;
	int countTemp = 0;
	map<int, int> mapex;
	
	cin >> t;
	
	for(int i = 0; i < t; i ++) {
		elimCounter = 0;
		cin >> n;
		for(int j = 0; j < n; j ++) {
			cin >> num;
			if(mapex.find(num) == mapex.end()) {
				mapex.insert(pair<int, int>(num, 1));
			}
			else {
				mapex[num]++;
			}
		}
		countMax = 0;
		for(auto iter = mapex.begin(); iter != mapex.end(); ++iter) {
			countTemp = iter->second;
			countMax = max(countTemp, countMax);
		}
		
		elimCounter = n - countMax;
		mapex.clear();
		cout << elimCounter << '\n';
	}
	return 0;
}
