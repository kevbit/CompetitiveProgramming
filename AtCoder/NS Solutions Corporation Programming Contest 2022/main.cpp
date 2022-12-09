#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int nSquares;
    int nPieces;
    int nOperations;

    cin >> nSquares;
    cin >> nPieces;
    cin >> nOperations;

    int piecePlaceHolder;
    int operationsPlaceHolder;

    int squares[nSquares];
    int pieces[nPieces];
    int operations[nOperations];

    for(int i = 0; i < nPieces; i ++) {
        cin >> piecePlaceHolder;
        pieces[i] = piecePlaceHolder;
    }

    for(int j = 0; j < nOperations; j ++) {
        cin >> operationsPlaceHolder;
        operations[j] = operationsPlaceHolder;
    }

    //Doing operations
    for(int m = 0; m < nOperations; m++){
        //Check for square to the left
        int operationPiece = operations[m];
        if(pieces[operationPiece - 1] < nSquares) {
            bool isSpace;
            for(int i = 0; i < nPieces; i ++) {
                isSpace = true;
                if(pieces[operationPiece - 1] + 1 == pieces[i]) {
                    isSpace == false;
                    break;
                }
            }
            if(isSpace == true) {
                pieces[operationPiece - 1] ++;
            }
            else {
                //do nothing
            }
        }
        else {
            //do nothing
        }
    }

    for(int o = 0; o < nPieces; o ++) {
        cout << pieces[o] << " ";
    }
    cout << "\n";
    return 0;
}
