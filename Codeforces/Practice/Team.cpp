#include <iostream>


using namespace std;

int main() {
	int numProb;
	cin >> numProb;
	
	int answerCounter = 0;
	for(int i = 0; i < numProb; i ++) {
		int sureCounter = 0;
		for(int j = 0; j < 3; j ++) {
			int num;
			cin >> num;
			if(num == 1) {
				sureCounter ++;
			}
		}
		if(sureCounter > 1) {
			answerCounter ++;
		}
	}
	cout << answerCounter << "\n";
}
