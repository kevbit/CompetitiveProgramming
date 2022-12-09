#include <cstdlib>
#include <iostream>
#include <string>


using namespace std;

int main() {
	int n;
	long long startIce = 0;
	string sign;
	long long inputIce;
	int badKids = 0;
	
	cin >> n;
	cin >> startIce;
	
	for(int i = 0 ; i < n; i ++) {
		cin >> sign;
		cin >> inputIce;
		if(sign[0] == '+') {
			startIce += inputIce;
		}
		else {
			if(inputIce <= startIce) {
				startIce -= inputIce;
			}
			else {
				badKids ++;
			}
		}
	}
	cout << startIce << " " << badKids;
	
	
	return 0;
}
