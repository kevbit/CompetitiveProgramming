#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int t;
	int n;
	int a;
	long long b;
	
	
	int numDiff = 0;
	long long maxSum = 0;
	long long localMax;
	int zeroCount = 0;
	int oneCount = 0;
	int localSum;
	
	vector<long long> oneValues;
	vector<long long> zeroValues;
	vector<long long> zeroOne;
	vector<long long> damageValues;
	
	cin >> t;
	
	for(int i = 0; i < t; i ++) {
		cin >> n;
		maxSum = 0;
		
		for(int j = 0; j < n; j ++) {
			cin >> a;
			localSum += a;
			if(a == 0) {
				zeroCount ++;
				zeroOne.push_back(a);
			}
			else {
				oneCount ++;
				zeroOne.push_back(a);
			}
			
		}
		
		if(zeroCount > oneCount) {
			numDiff = oneCount * 2;
		}
		else if (zeroCount < oneCount) {
			numDiff = zeroCount * 2;
		}
		else {
			numDiff = oneCount + zeroCount - 1;
		}
		
		for(int k = 0; k < n; k ++) {
			cin >> b;
			damageValues.push_back(b);
		}
		
		for(int o = 0; o < n; o ++) {
			if(zeroOne[o] == 0) {
				zeroValues.push_back(damageValues[o]);
			}
			else {
				oneValues.push_back(damageValues[o]);
			}
		}
		vector<int>::iterator it;
		
		for(int l = 0; l < numDiff; l++) {
			//Pick max 1
			localMax = *max_element(oneValues.begin(), oneValues.end());
			maxSum += localMax * 2;
			it = find(oneValues.begin(), oneValues.end(), localMax);
			oneValues.erase(it);
			localMax = 0;
			
			//Pick Max 0
			localMax = *max_element(zeroValues.begin(), zeroValues.end());
			maxSum += localMax * 2;
			it = find(zeroValues.begin(), zeroValues.end(), localMax);
			zeroValues.erase(it);
			localMax = 0;
		}
		
		cout << maxSum << '\n';
			
		}
		
		return 0;
	}
	

	
