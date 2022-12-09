#include <iostream>
#include <cstdlib>
#include <string.h>
#include <regex>

/*
   Author: Kevin Lo
   Date: 9/02/2022
   Assignment 1
*/

using namespace std;

int isPhoneNumber() {
	
	string phoneInput;
	cin >> phoneInput;
	regex phoneNumber("(1-9)(1-9)(1-9)-(1-9)(1-9)(1-9)-(1-9)(1-9)(1-9)(1-9)");
	
	if(regex_match(phoneInput, phoneNumber)) {
		cout << "true";
	}
	else {
		cout << "false";
	}
	
	
	
	return 0;
}

