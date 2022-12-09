#include <iostream>
#include <cstdlib>
#include <vector>


using namespace std;

int main() {
	int testcases;
	cin >> testcases;
	
	int n;
	
	for(int i = 0; i < testcases; i ++) {
		cin >> n;
		vector<int> perm(n);
		
		for(int j = 0; j < n; j ++) {
			perm[j] = j + 1;
		}
		
		for(int k = 0; k < n - 1; k += 2) {
			swap(perm[k], perm[k+1]);
		}
		
		for(int m = 1; m < n; m++) {
			if(perm[m] % (m + 1) == 0) {
				swap(perm[0], perm[m]);
			}
		}
		
		
		for(int l = 0; l < n; l ++) {
			cout << perm[l] << " ";
		}
		
		
		cout << "\n";
		
	}


return 0;

}
