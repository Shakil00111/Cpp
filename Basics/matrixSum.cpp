#include<iostream>
using namespace std;

void matSum(int matA[][100], int matB[][100], int row, int col);

int main() {

    cout << "NOTE: Both matrices must have the same number of columns and rows." << endl;

    int row, col;
    row = col = -1;

    while (col <= 0 || row <= 0) {

        if (col <= 0) {
            cout << "Enter number of columns: ";
            cin >> col;
        }

        if (row <= 0) {
            cout << "Enter number of rows: ";
            cin >> row;
        }
    }

    int matA[100][100], matB[100][100];

    cout << "Enter elements for matA:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matA[i][j];
        }
    }

    cout << "Enter elements for matB:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> matB[i][j];
        }
    }

    matSum(matA, matB, row, col);

    return 0;
}

void matSum(int matA[][100], int matB[][100], int row, int col) {

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            matA[i][j] += matB[i][j];
        }
    }

    cout << "Matrix sum is: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << matA[i][j] << " ";
        }
        cout << endl;
    }
}