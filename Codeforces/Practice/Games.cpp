#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
	int n;
	
	cin >> n;
	
	vector<int> homeColors;
	vector<int> guestColors;
	
	for(int i = 0; i < n; i ++ ) {
		int homeColor;
		int guestColor;
		
		cin >> homeColor;
		cin >> guestColor;
		
		homeColors.push_back(homeColor);
		guestColors.push_back(guestColor);
	}
	
	int changeUniforms = 0;
	
	for(int j = 0; j < n; j ++) {
		for(int k = 0; k < n; k ++) {
			if(homeColors[j] == guestColors[k]) {
				changeUniforms ++;
			}
		}	
	}
	
	cout << changeUniforms;
	
	
	
	
	
	return 0;
}
