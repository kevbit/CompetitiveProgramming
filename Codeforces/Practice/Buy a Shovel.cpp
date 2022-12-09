#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int k;
	int r;
	
	cin >> k;
	cin >> r;
	
	int numShovels = 1;
	bool noChange = false;
	int shovelCost;
	
	while(noChange == false) {
		shovelCost = numShovels * k;
		if(shovelCost % 10 == 0) {
			noChange = true;
		}
		else if(shovelCost % 10 == r) {
			noChange = true;
		}
		else {
			numShovels ++;
		}
	}
	
	cout << numShovels;
	
	return 0;
}
