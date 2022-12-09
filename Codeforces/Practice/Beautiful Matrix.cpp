#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int nCols;
	cin >> nCols;
	int blocks[nCols];
	
	for(int i = 0; i < nCols; i ++) {
		cin >> blocks[i];
	}
	
	for (int j = 0; j < nCols ; j ++) {
		for (int k = 0; k < nCols - 1; k ++) {
			if(blocks[k] > blocks[k+1]) {
				swap(blocks[k], blocks[k+1]);
			} 
		}
	}
	
	for (int k = 0; k < nCols; k ++) {
		cout << blocks[k] << " ";
	}
	
	
	return 0;
}

