#include <iostream>

using namespace std;

int main()
{
	int numFriends;
	int fenceHeight = 0; 
	int totalWidth = 0;
	
	cin >> numFriends;
	int friendsHeight[numFriends] = {};
	cin >> fenceHeight;
	
	for(int i = 0; i < numFriends; i ++) {
		cin >> friendsHeight[i];
	}
	
	for(int j = 0; j < numFriends; j++) {
		if(friendsHeight[j] > fenceHeight) {
			totalWidth += 2;
		}
		else {
			totalWidth ++;
		}
	}
	
	cout << totalWidth << "\n";
	
	return 0;
}

