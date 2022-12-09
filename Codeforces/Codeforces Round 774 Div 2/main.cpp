#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numTestCase;

    int n;
    int sum;
    int numSolutions;

    cin >> numTestCase;


    //Run for each test case
    for(int i = 0; i < numTestCase; i ++) {
        numSolutions = 0;
        int counter = 1;
        cin >> n;
        cin >> sum;

        //At least one possible solution
        while(sum - (pow(n, 2) * counter) >= 0 && counter < n + 2) {
            numSolutions ++;
            counter ++;
        }
        if(sum - (numSolutions * pow(n, 2)) > n) {
            numSolutions = 0;
        }
        if(sum - (numSolutions * pow (n, 2)) > 0 && numSolutions > n) {
            numSolutions = 0;
        }
        cout << numSolutions << endl;
    }

    return 0;
}
