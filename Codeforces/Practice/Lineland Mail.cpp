#include <cstdlib>
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	int maxDistance = 0;
	int minDistance;
	int n;
	vector<int> cities;
	int city;
	
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> city;
		cities.push_back(city);
	}
	
	for(int j = 0; j < n; j ++) {
		if(j == 0) {
			minDistance = abs(cities[j] - cities[1]);
			maxDistance = abs(cities[j] - cities[n - 1]);
			cout << minDistance << " " << maxDistance << '\n';
		}
		else if (j == (n - 1)) {
			minDistance = abs(cities[j] - cities[j - 1]);
			maxDistance = abs(cities[j] - cities[0]); 
			cout << minDistance << " " << maxDistance << '\n';
		}
		else {
			int min1 = abs(cities[j] - cities[j - 1]);
			int min2 = abs(cities[j] - cities[j + 1]);
			minDistance = min(min1, min2);
			int max1 = abs(cities[j] - cities[0]);
			int max2 = abs(cities[j] - cities[n - 1]);
			maxDistance = max(max1, max2);
			cout << minDistance << " " << maxDistance << '\n';
		}
	}
	
	
	
	return 0;
}
