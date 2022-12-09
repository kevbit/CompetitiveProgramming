#include <iostream>
#include <cstdlib>
#include <map>

using namespace std;

int main() {
	int inputColor;
	map<int, int> colorMap;
	int colorsNeeded;
	
	for(int i = 0; i < 4; i ++) {
		cin >> inputColor;
		colorMap.insert(pair<int, int>(inputColor, 0));
	}
	
	colorsNeeded = 4 - colorMap.size();
	
	cout << colorsNeeded;
	
	return 0;
}
