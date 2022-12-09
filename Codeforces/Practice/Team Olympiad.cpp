#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
#include <queue> 
#include <string>
#include <deque>

using namespace std;

int main(){
	queue<int> programming, maths, pe;
	
	int n;
	int input;
	cin >> n;
	
	for(int i = 1; i <= n; i ++) {
		cin >> input;
		if(input == 1) {
			programming.push(i);
		}
		else if(input == 2) {
			maths.push(i);
		}
		else {
			pe.push(i);
		}
	}
	
	if(programming.size() > 0 && maths.size() > 0 && pe.size() > 0) {
		int numOfTeams;
		numOfTeams = min(programming.size(), min(maths.size(), pe.size()));
		cout << numOfTeams << "\n";
		for(int j = 0; j < numOfTeams; j ++) {
			cout << programming.front() << " " << maths.front() << " " << pe.front() << "\n";
			programming.pop();
			maths.pop();
			pe.pop();
		}
	}
	else {
		cout << "0" << "\n";
	}
	
	
	return 0;
}
