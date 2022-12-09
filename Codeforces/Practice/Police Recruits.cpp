#include <iostream>
#include <cstdlib>
#include <vector>


using namespace std;

int main() {
	int policeCounter = 0;
	int untreatedCounter = 0;
	
	int n;
	
	cin >> n;
	
	int eventCode;
	
	for(int i = 0; i < n; i ++) {
		cin >> eventCode;
		if(eventCode > 0) {
			policeCounter += eventCode;
		}
		else {
			untreatedCounter ++;
			if(policeCounter > 0) {
				untreatedCounter --;
				policeCounter --;
			}
		}
	}		
	cout << untreatedCounter;
	
	
	
	return 0;
}
