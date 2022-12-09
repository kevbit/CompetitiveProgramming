/*
* ID: Kevin Lo [kevjclo1]
* TASK: beads
* LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

bool checkW(string input) {
	int length = input.length();
	
	for(int i = 0; i < length; i ++) {
		if(input[i] == 'w') {
			return true;
		}
	}
	return false;
	
}

int main() {
	
	//ifstream fin ("beads.in");
	//ofstream fout ("beads.out");
	
	int n;
	int maxSequenceCounter = 0;
	int megaMaxSequenceCounter = 0;
	int sequenceCounter = 0;
	int changeCounter = 1;
	int rbtrackerinit; //0 = red 1 = blue 
	int rbtracker;
	string rawinput;
	
	
	cin >> n;
	
	string input;
	cin >> rawinput;
	
	input = rawinput + rawinput;
	cout << input << '\n';
		
	//initializing rbtracker
	
	//Counting largest a sequence
	//When w spotted just increment sequence number
	for(int z = 0; z < n * 2; z++) {
		if(input[z] == 'r') {
			rbtrackerinit = 0;
		}
		else if (input[z] == 'b') {
			rbtrackerinit = 1;
		}
		else {
			rbtrackerinit = 2;
		}
		rbtracker = rbtrackerinit;
		for(int k = z; k < n * 2; k++) {
		if(input[k] == 'r') {
			if(rbtracker == 0 || rbtracker == 2) {
				sequenceCounter ++;
				maxSequenceCounter = max(sequenceCounter, maxSequenceCounter);
				rbtracker = 0;
			}
			else {
				changeCounter++;
				if(changeCounter % 2 == 0 && changeCounter > 0) {
					changeCounter = 0;
					sequenceCounter = 0;
				}		
				sequenceCounter ++;
				maxSequenceCounter = max(sequenceCounter, maxSequenceCounter);
				rbtracker = 0;
			}
		}
		else if(input[k] == 'b') {
			if(rbtracker == 1 || rbtracker == 2) {
				sequenceCounter ++;
				maxSequenceCounter = max(sequenceCounter, maxSequenceCounter);
				rbtracker = 1;
			}
			else {
				changeCounter ++;
				if(changeCounter % 2 == 0 && changeCounter > 0) {
					changeCounter = 0;
					sequenceCounter = 0;
				}
				sequenceCounter ++;
				maxSequenceCounter = max(sequenceCounter, maxSequenceCounter);
				rbtracker = 1;
			}
		}
		else { //Triggers when w exists
			if(input[k] == 'w') {
				sequenceCounter ++;
				maxSequenceCounter = max(sequenceCounter, maxSequenceCounter);
			}
			else {
				changeCounter ++;
				if(changeCounter % 2 == 0 && changeCounter > 0) {
					changeCounter = 0;
					sequenceCounter = 0;
				}
				sequenceCounter ++;
				maxSequenceCounter = max(sequenceCounter, maxSequenceCounter);
				if(input[k] == 'r') {
					rbtracker = 0;
				}
				else if(input[k] == 'b') {
					rbtracker = 1;
				}
				
			}
			
		}
		cout << "rbtracker " << rbtracker <<" Sequence Counter: " << sequenceCounter << " Change Counter: " << changeCounter << " Max Sequence Counter: " << maxSequenceCounter << '\n';
	}
		megaMaxSequenceCounter = max(megaMaxSequenceCounter, maxSequenceCounter);
	}
	
	
	cout << maxSequenceCounter;
	
	
	
	return 0;
}
