#include <iostream>
#include <cstdlib>
#include <string.h>


using namespace std;

int main() {
	string s;
	cin >> s;
	int numUpper = 0;
	int numLower = 0;
	int sLength = s.length();
	
	for(int i = 0; i < sLength; i ++) {
		if(isupper(s[i])) {
			numUpper ++;
		}
		else {
			numLower ++;
		}
	}
	
	if(numUpper > numLower) {
		for(int j = 0; j < sLength; j ++) {
			s[j] = toupper(s[j]);
		}
	}
	else {
		for(int j = 0; j < sLength; j ++) {
			s[j] = tolower(s[j]);
		}
	}
	
	cout << s << "\n";
	
	return 0;
}

