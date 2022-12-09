#include <iostream>

using namespace std;

int main()
{
    int watermelonWeight;

    cin >> watermelonWeight;

    if(watermelonWeight % 2 == 0) {
        if(watermelonWeight > 2) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
    else {
        cout << "NO";
    }
    return 0;
}
