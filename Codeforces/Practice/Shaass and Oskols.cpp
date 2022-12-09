#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
	
	int numLines;
	int numShotsTotal;
	int numBirds;
	int lineNumber;
	int shotNumber;
	int birdToLeft;
	int birdToRight;
	int trueLine;
	
	vector<int> lines;
	cin >> numLines;
	
	for(int i = 0; i < numLines; i++) {
		cin >> numBirds;
		lines.push_back(numBirds);
	}
	
	cin >> numShotsTotal;
	
	for(int j = 0; j < numShotsTotal; j++) {
		cin >> lineNumber;
		cin >> shotNumber;
		trueLine = lineNumber - 1;
		
		
		//cout << lines[lineNumber - 1] << "\n";
		birdToLeft = shotNumber - 1;
		//cout << birdToLeft << "\n";
		birdToRight = lines[trueLine] - shotNumber;
		//cout << birdToRight << "\n";
		
		//If on the furtherst line to the left
		if(trueLine == 0) {
			lines[trueLine] = 0;
			if((trueLine + 1) != (int) lines.size()) {
				lines[trueLine + 1] += birdToRight;
			}
		} 
		else if((trueLine + 1) == (int) lines.size()) {
			lines[trueLine] = 0;
			if(trueLine - 1 > -1) {
				lines[trueLine - 1] += birdToLeft;	
			}
		}
		else {
			lines[trueLine] = 0;
			lines[trueLine + 1] += birdToRight;
			lines[trueLine - 1] += birdToLeft;
			
		}
		
	}
	
	for(int k = 0; k < numLines; k ++) {
		cout << lines[k] << "\n";
	}
	
	
	
	
	return 0;
}
