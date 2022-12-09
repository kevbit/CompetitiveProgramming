 /*
ID: Kevin Lo [kevjclo1]
TASK: ride
LANG: C++                 
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <map>

using namespace std;

int main() {
	ofstream fout ("ride.out");
	ifstream fin ("ride.in");
	
	string group;
	string comet;
	
	fin >> comet;
	fin >> group;
	
	int cometLength = comet.length();
	int groupLength = group.length();
	
	int groupNum = 1;
	int cometNum = 1;
	
	
	
	map<char, int> alpha;
	
	alpha.insert(pair<char, int>('A', 1));
	alpha.insert(pair<char, int>('B', 2));
	alpha.insert(pair<char, int>('C', 3));
	alpha.insert(pair<char, int>('D', 4));
	alpha.insert(pair<char, int>('E', 5));
	alpha.insert(pair<char, int>('F', 6));	
	alpha.insert(pair<char, int>('G', 7));
	alpha.insert(pair<char, int>('H', 8));
	alpha.insert(pair<char, int>('I', 9));
	alpha.insert(pair<char, int>('J', 10));
	alpha.insert(pair<char, int>('K', 11));
	alpha.insert(pair<char, int>('L', 12));
	alpha.insert(pair<char, int>('M', 13));
	alpha.insert(pair<char, int>('N', 14));
	alpha.insert(pair<char, int>('O', 15));
	alpha.insert(pair<char, int>('P', 16));
	alpha.insert(pair<char, int>('Q', 17));
	alpha.insert(pair<char, int>('R', 18));
	alpha.insert(pair<char, int>('S', 19));
	alpha.insert(pair<char, int>('T', 20));
	alpha.insert(pair<char, int>('U', 21));
	alpha.insert(pair<char, int>('V', 22));
	alpha.insert(pair<char, int>('W', 23));
	alpha.insert(pair<char, int>('X', 24));
	alpha.insert(pair<char, int>('Y', 25));
	alpha.insert(pair<char, int>('Z', 26));
	
	for(int i = 0; i < cometLength; i ++) {
		cometNum *= alpha.at(comet[i]);
	}
	
	for(int j = 0; j < groupLength; j ++) {
		groupNum *= alpha.at(group[j]);
	}
	
	int cometMod = cometNum % 47;
	int groupMod = groupNum % 47;
	
	if(cometMod == groupMod) {
		fout << "GO" << endl;	
	}
	else {
		fout << "STAY" << endl;
	}
	
	return 0;
}
