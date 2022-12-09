#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int numGames;
	int gamesWon = 0; //Keeps track of the number of games positive is anton negatiev is danik 0 is friendship
	string gamesPlayed;
	string antonLetter = "A";
	
	cin >> numGames;
	cin >> gamesPlayed;
	
	for(int i = 0; i < numGames; i ++) {
		string currentLetter = gamesPlayed.substr(i, 1);
		if(currentLetter == antonLetter){
			gamesWon ++;
		}
		else {
			gamesWon --;
		}
	}
	
	if(gamesWon > 0) {
		cout << "Anton" << "\n";
	}
	else if(gamesWon < 0) {
		cout << "Danik" << "\n";
		
	}
	else {
		cout << "Friendship" << "\n";
	}
	
	
	return 0;
}

