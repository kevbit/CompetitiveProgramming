#include <iostream>


using namespace std;

int main() {
	
	int l1;
	int r1;
	int l2;
	int r2;
	
	cin >> l1;
	cin >> r1;
	cin >> l2;
	cin >> r2;
	int length;
	
	if(l2 > l1 && l2 < r1) {
		if(r2 > r1) {
			length = r1 - l2;
			cout << length << "\n";	
		}
		else if (r2 < r1) {
			length = r2 - l2;
			cout << length << "\n";
		}
		else {
			cout << 0 << "\n";
		}
	}
	else if (l2 < l1) {
		if(r2 > l1 && r2 < r1) {
			length = r2 - l1;
			cout << length << "\n";
		}
		else if (r2 > r1) {
			length = r1 - l1;
			cout << length << "\n";
		}
		else {
			cout << 0 << "\n";
		}
	}
	else {
		cout << 0 << "\n";
	}
	
	
	return 0;
}
