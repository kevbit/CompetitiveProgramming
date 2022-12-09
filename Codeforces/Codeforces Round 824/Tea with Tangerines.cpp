#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	
	int t;
	int n;
	double o;
	vector<double> nums;
	vector<double> remainders;
	int count = 0;
	double remainder;
	double numCheck;

	
	cin >> t;

	for(int i = 0; i < t; i ++) {
		cin >> n;
		for(int j = 0; j < n; j ++) {
			cin >> o;
			nums.push_back(o);
		}
		numCheck = nums[n - 1] / nums[0];
		for(int k = 1; k < n; k ++) {
			while(nums[k] >= 2 * nums[0]) {
				remainder = nums[k] - ceil(nums[k]/2); 
				nums[k] = ceil(nums[k]/2);
				count ++;
				if(nums[n - 1] / nums[0] >= 5) {
					while(remainder >= 2 * nums[0]) {
					remainder = ceil(remainder / 2);
					count ++;
				}
				
			}
		}
		
		}
		if(numCheck >= 5) {
			cout << count + 1 << '\n';
		}
		else {
			cout << count << '\n';
		}
		count = 0;
		
	}
	
	
		
	
	
	
	return 0;
}
