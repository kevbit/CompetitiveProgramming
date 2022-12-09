#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
	int n;
	int k;
	string chosenOne;
	string password = "";
	vector<string> letters;
	vector<string> used;
	vector<string>::iterator it;
	int alternateTracker = 0;
	
	
	letters.push_back("a");
	letters.push_back("b");
	letters.push_back("c");
	letters.push_back("d");
	letters.push_back("e");
	letters.push_back("f");
	letters.push_back("g");
	letters.push_back("h");
	letters.push_back("i");
	letters.push_back("j");
	letters.push_back("k");
	letters.push_back("l");
	letters.push_back("m");
	letters.push_back("n");
	letters.push_back("o");
	letters.push_back("p");
	letters.push_back("q");
	letters.push_back("r");
	letters.push_back("s");
	letters.push_back("t");
	letters.push_back("u");
	letters.push_back("v");
	letters.push_back("w");
	letters.push_back("x");
	letters.push_back("y");
	letters.push_back("z");
	
	cin >> n;
	cin >> k;
	
	for (int i = 0; i < n; i ++) {
		if(i < k) {
			password += letters[i];
		}
		else { //Make the following non consecutive, just alternate between a,b
			if(alternateTracker % 2 == 0) {
				password += "a";
				alternateTracker ++;
			}
			else {
				password += "b";
				alternateTracker ++;
			}
		}
		
	}
	cout << password << '\n';
	
	
	
	return 0;
}
