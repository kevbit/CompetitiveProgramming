#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	int removeCounter = 0;
	string stones;
	cin >> stones;
	
	for(int i = 0; i < n - 1; i ++) {
		if(stones[i] == stones[i + 1]) {
			removeCounter ++;
		}
	}
	
	cout << removeCounter;



	return 0;
}
