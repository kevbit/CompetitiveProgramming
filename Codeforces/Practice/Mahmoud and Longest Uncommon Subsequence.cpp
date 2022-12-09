#include <iostream>
#include <cstdlib>
#include <string.h>
#include <vector>

using namespace std;



int main() {
	string a;
	string b;
	
	cin >> a;
	cin >> b;
	
	if(a != b) {
		if(a.length() > b.length()) {
			cout << a.length();
		}
		else if (a.length() < b.length()) {
			cout << b.length();
		}
		else {
			cout << a.length();
		}
	}
	else {
		cout << -1;
	}
	
	
	return 0;
}
