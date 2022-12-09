#include <iostream>


using namespace std;

int main() {
	int l;
	int b;
	
	cin >> l;
	cin >> b;
	int years = 0;
	while(l <= b) {
		l *= 3;
		b *= 2;	
		years ++;	
	}
	
	cout << years << "\n";
	
	
	return 0;
}
