#include<iostream>
using namespace std;

int main() {

    // matrix column and row initializations

    int col = -1, row = -1;
    
    // taking user input for column and row for matrix and ensure that negetive value or more that our limits are not provided.

    while(col < 0 || row < 0 || col > 6 || row > 6) {

        if (col < 0 || col > 6) {
            cout<<"Enter column of matrix : ";
            cin>>col;
        } else if (row < 0 || row > 6) {
            cout<<"Enter row of matrix : ";
            cin>>row;
        }
    }

    int mat[row][col];  // initilize 2D matrix.

    cout<<"Enter value for "<<row<<"x"<<col<<" martix A: "<<endl;   // taking user input for matrix.
    for(int r = 0; r < row; r++) {
        for(int c = 0; c < col; c++) {
            cin>>mat[r][c];
        }
    }

    cout<<endl<<"A: "<<endl;
    for(int r = 0; r < row; r++) {      // print input matrix.
        for(int c = 0; c < col; c++) {
            cout<<mat[r][c]<<" ";
        }
        cout<<endl;
    }

    int matT[col][row];     // initilize n x m martix for transpose martix.

    for(int r = 0; r < row; r++) {      // transpose of the input matrix.
        for(int c = 0; c < col; c++) {
            matT[c][r] = mat[r][c];
        }
    }

    cout<<endl<<"AT : "<<endl;
    for(int c = 0; c < col; c++) {      // print transpose matrix.
        for(int r = 0; r < row; r++) {
            cout<<matT[c][r]<<" ";
        }
        cout<<endl;
    }

    return 0;
}