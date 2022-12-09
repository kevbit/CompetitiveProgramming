#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

int main() {
	int firstCalories;
	int secondCalories;
	int thirdCalories;
	int fourthCalories;
	
	cin >> firstCalories;
	cin >> secondCalories;
	cin >> thirdCalories;
	cin >> fourthCalories;
	
	string inputString;
	cin >> inputString;
	
	int length;
	length = inputString.length();
	
	int calorieCounter = 0;
	
	for(int i = 0; i < length; i ++) {
		if(inputString[i] == '1') {
			calorieCounter += firstCalories;
			
		}
		else if(inputString[i] == '2') {
			calorieCounter += secondCalories;
			
		}
		else if (inputString[i] == '3') {
			calorieCounter += thirdCalories;
		}
		else {
			calorieCounter += fourthCalories;
		}
	}
	
	cout << calorieCounter;
	
	
	
	
	return 0;
}
