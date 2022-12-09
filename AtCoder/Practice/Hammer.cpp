#include <iostream>
#include <cmath>

using namespace std;


int main() {
	int goal;
	int wall;
	int hammer;
	int distance = 0;
	cin >> goal;
	cin >> wall;
	cin >> hammer;
	
	
	if(goal > 0) {
		if(goal > wall) {
			if(hammer < wall) {
				if(hammer > 0) {
					distance += goal;
				}
				else {
					distance += abs(hammer) * 2;
					distance += goal;
				}
			}
			else if (hammer > wall && wall < 0) {
				distance += goal;
			}
			else {
				distance = -1;
			}
		}
		else {
			distance += goal;
		}
		
	}
	else {
		if(goal < wall) {
			if(hammer > wall) {
				if(hammer > 0) {
					distance += hammer * 2;
					distance += abs(goal);
				}
				else {
					distance += abs(goal);
				}
			}
			else if (hammer < wall && wall > 0) {
				distance += abs(goal);
			}
			else {
				distance = -1;
			}
		}
		else {
			distance += abs(goal);
		}
		
	}
	cout << distance << '\n';

	
	return 0;
}
