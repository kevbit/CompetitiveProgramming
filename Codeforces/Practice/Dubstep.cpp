#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for(int i = a; i < b; i ++)

int main() {
	string s;
	cin >> s;
	
	s = "WUB" + s + "WUBWUB";
	
	vector<string> sol;

	string now = "";

	REP(i,0, s.length() - 3) {
		if(s[i] == 'W' && s[i + 1] == 'U' && s[i+2] == 'B') {
			
			if(now != "") {
				sol.pb(now);
			}
			now = "";
			i += 2;
		}
		else {
			now += s[i];
		}
	}

	REP(j,0, sol.size()) {
		cout << sol[j] << " ";
	}




	return 0;
}
