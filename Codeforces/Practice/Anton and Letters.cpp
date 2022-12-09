#include <bits/stdc++.h>
#include <string.h>

using namespace std;


int main(){
	string s;
	
	set<char> charSet;
	getline(cin, s);
	
	int sSize = s.length();
	
	for(int i = 0; i < sSize; i ++) {
		if(isalpha(s[i])) {
			charSet.insert(s[i]);
		}
	}
	
	cout << charSet.size();
	
	
	return 0;
}
