/*
ID: Kevin Lo [kevjclo1]
TASK: gift1
LANG: C++                 
*/
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <queue>

using namespace std;

int main() {
	int n;
	
	ofstream fout ("gift1.out");
	ifstream fin ("gift1.in");
	
	
	map<string, int> friends;
	map<string, int> initialMoney;
	
	fin >> n;
	string name;
	int balance = 0;
	queue<string> nameList;
	int bank;
	int splitNum;
	int splitAmount;
	int leftOver;
	//Set keeps track of where name is
	//Array keeps track of name values
	
	//Sets the name
	for(int i = 0; i < n; i ++) {
		fin >> name;
		nameList.push(name);
		friends.insert(pair<string, int>(name, balance));
	}
	
	for(int j = 0; j < n; j ++) {
		fin >> name;
		fin >> bank;
		fin >> splitNum;
		if(splitAmount != 0 && bank != 0) {
			splitAmount = bank / splitNum;
			leftOver = bank % splitNum;
			friends[name] -= bank;
			friends[name] += leftOver;
			for(int k = 0; k < splitNum; k ++) {
				fin >> name;
				friends[name] += splitAmount;
			}	
		} 
		else {
		
		}
	}
	
	for(int l = 0; l < n; l ++) {
		fout << nameList.front() << " " << friends[nameList.front()] << endl;
		nameList.pop();
	}
	
	
	return 0;
}
