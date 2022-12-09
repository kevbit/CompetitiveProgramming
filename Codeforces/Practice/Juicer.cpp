#include <cstdlib>
#include <iostream>

using namespace std;


int main() {
	int n;
	int orangeSize;
	int totalOrangeSqueezed = 0;
	int juicerCapacity;
	int juicerWasteCapacity;
	int totalEmpty = 0;
	
	cin >> n;
	cin >> juicerCapacity;
	cin >> juicerWasteCapacity;
	
	for(int i = 0; i < n; i ++) {
		cin >> orangeSize;
		if(orangeSize <= juicerCapacity) {
			totalOrangeSqueezed += orangeSize;
		}
		if(totalOrangeSqueezed > juicerWasteCapacity) {
			totalEmpty ++;
			totalOrangeSqueezed = 0;
		}
	}
	
	cout << totalEmpty;
	
	
	
	
}
