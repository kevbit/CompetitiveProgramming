#include <iostream>

using namespace std;

int main() {
	int t;
	int x;
	int y;
	int diff;
	
	cin >> t;
	
	for(int i = 0; i < t; i ++) {
		cin >> x;
		cin >> y;
		diff = x - y;
		cout << diff << '\n';
	}
	
	
	
	
	return 0;
}
