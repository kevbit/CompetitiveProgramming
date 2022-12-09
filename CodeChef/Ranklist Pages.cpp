#include <iostream>

using namespace std;

int main() {
	
	int n;
	int x;
	int pageNumber;
	
	cin >> n;
	
	
	for(int i = 0; i < n; i ++) {
		cin >> x;
		pageNumber = (x / 25) + 1;
		
		if(x % 25 == 0) {
			pageNumber --;
		}
		cout << pageNumber << '\n';
	}


	return 0;
}
