#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	bool ratingChange = false;
	bool standingChange = false;


	int ratingtemp1;
	int ratingtemp2;
	
	cin >> ratingtemp1;
	cin >> ratingtemp2;

	if(ratingtemp1 != ratingtemp2) {
		ratingChange = true;
	}
	

	int rating1;
	int rating2;

	for(int i = 1; i < n; i ++) {

		
		cin >> rating1;
		cin >> rating2;
		
		if(rating1 != rating2) {
			ratingChange = true;
		}

		if(rating2 > ratingtemp2) {
			standingChange = true;
		}


		ratingtemp2 = rating2;
	}

	if (standingChange == false && ratingChange == false) {
		cout << "maybe" << "\n";
	}
	else if (ratingChange == true) {
		cout << "rated" << "\n";
	}
	else {
		cout << "unrated" << "\n";
	}


	return 0;
}
