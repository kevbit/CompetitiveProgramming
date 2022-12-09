#include <iostream>
#include <cstdlib>
#include <vector>
#include <set>
#include <queue>

using namespace std;


int main() {
	//stack keeps track of the order that elements came in
	//set orders elements from min to max
	int n;
	cin >> n;
	vector<int> intv;
	int t;
	set<int, greater<int>> intSet;
	set<int, greater<int>> fallen;
	queue<int> qInt;
	set<int, greater<int> >::iterator itr;
	set<int, greater<int> >::iterator itr2;
	
	for(int i = 0; i < n; i ++) {
		cin >> t;
		intv.push_back(t);
		intSet.insert(t);
	}
	itr2 = intSet.begin();
	
	for(int j = 0; j < n; j ++) {
		if(intv[j] == *itr2) {
			fallen.insert(intv[j]);
			for(itr = fallen.begin(); itr != fallen.end(); itr ++) {
				cout << *itr << " ";
				itr2 ++;
			}
			fallen.clear();
			cout << '\n';
		}
		else {
			fallen.insert(intv[j]);
			cout << '\n';
		}
	}
	cout << "Hello World?" << '\n';
	
	return 0;
}
