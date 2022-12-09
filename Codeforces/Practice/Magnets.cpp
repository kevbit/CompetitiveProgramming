#include <iostream>
#include <cstdlib>
#include <string.h>


using namespace std;

int main() {
	int n;
	cin >> n;
	int groups = 1;
	int pNum;
	int cNum;
	string s;
	
	cin >> s;
	if(s == "01") {
		pNum = 0;
	}
	else {
		pNum = 1;
	}
	
	for(int i = 0; i < n - 1; i ++) {
		cin >> s;
		if(s == "01") {
			cNum = 0;
			if(cNum != pNum) {
				groups ++;
			}
			pNum=cNum;
		}
		else {
			cNum = 1;
			if(cNum != pNum) {
				groups ++;
			}
			pNum = cNum;
		}
	}
	cout << groups << "\n"; 
	
	return 0;
}



