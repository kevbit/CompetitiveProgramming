#include <bits/stdc++.h>

using namespace std;

int main() {
	
	long long n;
	cin >> n;

	long long select;
	cin >> select;
	
	long long oddbound = (n / 2) + (n % 2);

	if(select <= oddbound) {
		long long odd;
		odd = 2 * (select - 1) + 1;
		cout << odd << "\n";
	}
	else {
		long long even;
		even = 2 * (select - oddbound);
		cout << even << "\n";
	}



	return 0;
}
