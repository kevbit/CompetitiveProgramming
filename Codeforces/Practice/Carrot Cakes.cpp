#include <iostream>
#include <cstdlib>
#include <cmath>


using namespace std;

int main() {
	int n;
	int t;
	int k;
	int d;
	int m = 0;
	int om = 0;
	
	int cakesBaked = 0;
	
	cin >> n;
	cin >> t;
	cin >> k;
	cin >> d;
	
	
	while(cakesBaked < n) {
		if(om % t == 0 && om > 0) {
			cakesBaked += k;
		}
		om ++;
	}
	int newCakesBaked = 0;
	
	int c = -1 * d;
	while(newCakesBaked < n) {
		if(m % t == 0 && m > 0) {
			newCakesBaked += k;
		}
		if(c % t == 0 && c > 0) {
			newCakesBaked += k;
		}
		c++;
		m++;
	}
	
	m -= 1;
	om -= 1;
	
	if(om <= m) {
		cout << "NO";
	}	
	else {
		cout << "YES";
	}
	

	return 0;
}
