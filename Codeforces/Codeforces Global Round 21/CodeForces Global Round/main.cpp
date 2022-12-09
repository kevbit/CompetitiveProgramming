#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    for(int i = 0; i < t; t ++) {
        cin >> n;
        int universeArray[n];
        for (int j = 0; j < n; j ++) {
            cin >> universeArray[j];
        }

        //Number of groups of non-zero clusters is the number of times it needs to be divded
        int numNonZeroCluster = 0;
        for(int i = 0; i < n; i ++) {
            //Case 1: Lone number surrounded by 0's
            if(universeArray[i] != 0 && i != 0 && i < n - 1) {
                if(universeArray[i - 1] == 0) {
                    if(universeArray[i + 1] == 0) {
                        numNonZeroCluster ++;
                    }
                }
            }
            //Case 2: Lone number followed by at least 2 0's
            else if (universeArray[i] != 0 && i < n - 2) {
                if(universeArray[i + 1] == 0 && universeArray[i + 2] == 0) {
                    numNonZeroCluster ++;
                }
            }
            //Case 3: Lone number trailed back by at least 2 0's
            else if (universeArray[i] != 0 && i > 1) {
                if(universeArray[i - 1] == 0 && universeArray[i - 2] == 0) {
                    numNonZeroCluster ++;
                }
            }

            //Case 4:Group of Numbers

        }

        cout << numNonZeroCluster;



    }


    return 0;
}
