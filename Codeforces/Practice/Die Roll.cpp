#include <iostream>
#include <cstdlib>
#include <map>
#include <string.h>

using namespace std;

int main() {
	
	int Y;
	int W;
	
	cin >> Y;
	cin >> W;
	
	int rollToBeat = max(Y,W);
	
	int numbersLeft = 7 - rollToBeat;
	
	map<int, string> FractionTable;
	FractionTable.insert(pair<int, string> (0, "0/1"));
	FractionTable.insert(pair<int, string> (1, "1/6"));
	FractionTable.insert(pair<int, string> (2, "1/3"));
	FractionTable.insert(pair<int, string> (3, "1/2"));
	FractionTable.insert(pair<int, string> (4, "2/3"));
	FractionTable.insert(pair<int, string> (5, "5/6"));
	FractionTable.insert(pair<int, string> (6, "1/1"));
	
	cout << FractionTable[numbersLeft];
	
	return 0;
}
