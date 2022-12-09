#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <map>

using namespace std;

int main() {
	map <char, int> Alphabet;
	Alphabet['a'] = 1;
	Alphabet['b'] = 2;
	Alphabet['c'] = 3;
	Alphabet['d'] = 4;
	Alphabet['e'] = 5;
	Alphabet['f'] = 6;
	Alphabet['g'] = 7;
	Alphabet['h'] = 8;
	Alphabet['i'] = 9;
	Alphabet['j'] = 10;
	Alphabet['k'] = 11;
	Alphabet['l'] = 12;
	Alphabet['m'] = 13;
	Alphabet['n'] = 14;
	Alphabet['o'] = 15;
	Alphabet['p'] = 16;
	Alphabet['q'] = 17;
	Alphabet['r'] = 18;
	Alphabet['s'] = 19;
	Alphabet['t'] = 20;
	Alphabet['u'] = 21;
	Alphabet['v'] = 22;
	Alphabet['w'] = 23;
	Alphabet['x'] = 24;
	Alphabet['y'] = 25;
	Alphabet['z'] = 26;
	
	int rotations = 0;
	int totalRotations = 0;
	int distance;
	string inputWord;
	cin >> inputWord;
	
	inputWord = "a" + inputWord;
	for(int i = 0; i < (int) inputWord.length() - 1; i ++) {
		distance = abs(Alphabet[inputWord[i]] - Alphabet[inputWord[i + 1]]);
		if(distance < 13) {
			rotations = abs(Alphabet[inputWord[i]] - Alphabet[inputWord[i + 1]]);
			totalRotations += rotations;
		}
		else {
			rotations = 26 - distance;
			totalRotations += rotations;
		}
			
	}
	
	cout << totalRotations << "\n";
	
	
	
	return 0;
}
