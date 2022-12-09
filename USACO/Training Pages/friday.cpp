/*
ID: Kevin Lo [kevjclo1]
TASK: friday
LANG: C++                 
*/


#include <fstream>

using namespace std;


bool isLeapYear(int year) {
	if(year % 100 == 0) {
		if(year % 400 == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	else if(year % 4 == 0) {
		return true;
	}
	else {
		return false;
	}
}


int main() {
	ifstream fin ("friday.in");
	ofstream fout ("friday.out");
	
	int yearsPassed;
	int year = 1900;
	int dayTracker[7] = {0,0,0,0,0,0,0};
	int dayOfWeek;
	int dayCounter = 0; //Used to calculate day of the week
	
	fin >> yearsPassed;
	
	for(int i = 0; i < yearsPassed; i ++) {
		if(isLeapYear(year) == false) {
			//January
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 18;
			//February
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 15;
			//March
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 18;
			//April
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 17;
			//May
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 18;
			//June
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 17;
			//July
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 18;
			//August
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 18;
			//September
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 17;
			//October
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 18;
			//November
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 17;
			//December
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 18;
			
			year++;
		}
		else {
			//January
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 18;
			//February
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 16;
			//March
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 18;
			//April
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 17;
			//May
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 18;
			//June
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 17;
			//July
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 18;
			//August
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 18;
			//September
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 17;
			//October
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 18;
			//November
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 17;
			//December
			dayCounter += 13;
			dayOfWeek = dayCounter % 7;
			dayTracker[dayOfWeek]++;
			dayCounter += 18;
			
			year++;
		}
	}
	fout << dayTracker[6] << " " << dayTracker[0] << " " << dayTracker[1] << " " << dayTracker[2] << " " << dayTracker[3] << " " << dayTracker[4] << " " << dayTracker[5] << '\n';
	
	
	
	
	return 0;
}
