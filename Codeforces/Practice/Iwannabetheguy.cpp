#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;

	cin >> n;
	int x;
	cin >> x;

	int size;
	int levels = n;

	set<int> tried;
	int l;

	for(int i = 0; i < x; i ++) {
		cin >> l;
		tried.insert(l);
	}

	int y;
	cin >> y;

	for(int j = 0; j < y; j ++) {
		cin >> l;
		tried.insert(l);
	}

	size = tried.size();

	if(size == n) {
		cout << "I become the guy." << "\n";
	}
	else {
		cout << "Oh, my keyboard!" << "\n";
	}



	return 0;
}
