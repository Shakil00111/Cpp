#include<iostream>
using namespace std;

void multiplication(int matA[][50], int matB[][50], int dimn[]);
int dimension(bool flag);

int main() {
    cout << "NOTE: In matrix multiplication, the number of columns of matA must be equal to the number of rows of matB." << endl;

    int dimn[4], matA[50][50], matB[50][50];

    cout << "Enter row and column for matA." << endl;
    dimn[0] = dimension(true);
    dimn[1] = dimension(false);

    cout << "Enter elements of matA: " << endl;
    for (int i = 0; i < dimn[0]; i++) {
        for (int j = 0; j < dimn[1]; j++) {
            cin >> matA[i][j];
        }
    }

    cout << "Enter row and column for matB." << endl;
    dimn[2] = dimension(true);
    dimn[3] = dimension(false);

    // Cheaking is multplication possible between matA and matB.

    if (dimn[1] != dimn[2]) {
        cout << "Matrix multiplication is not possible because columns of matA do not match rows of matB." << endl;
        return 0;
    }

    cout << "Enter elements of matB: " << endl;
    for (int i = 0; i < dimn[2]; i++) {
        for (int j = 0; j < dimn[3]; j++) {
            cin >> matB[i][j];
        }
    }

    multiplication(matA, matB, dimn);

    return 0;
}

int dimension(bool flag) {
    int dimn = -1;

    while (dimn <= 0 || dimn > 50) {
        if (flag)
            cout << "Enter number of rows: ";
        else
            cout << "Enter number of columns: ";

        cin >> dimn;
    }

    return dimn;
}

void multiplication(int matA[50][50], int matB[50][50], int dimn[]) {

    int result[50][50] = {0};

    for (int i = 0; i < dimn[0]; i++) {
        for (int j = 0; j < dimn[3]; j++) {
            for (int k = 0; k < dimn[1]; k++) {
                result[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }

    cout << "Matrix multiplication result is: " << endl;
    for (int i = 0; i < dimn[0]; i++) {
        for (int j = 0; j < dimn[3]; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}