#include<iostream>
using namespace std;

void lowerTrianguler(int row, int col);
void upperTiranguler(int row, int col);

int main() {

    int col = 0;
    int row = 0;
    
    while(col <= 0 && row <= 0) {
        cout<<"Column and Row should be greater than '1' "<<endl;

        if(row <= 0) {
            cout<<"Enter row : ";
            cin>>row;
        }

        if(col <= 0) {
            cout<<"Enter column: ";
            cin>>col;
        }
    }

    lowerTrianguler(row, col);

    return 0;
}

void lowerTrianguler(int row, int col) {

    cout<<"Lower Trianguler pattern is : "<<endl;

    for(int i = 0; i < col; i++) {
        for(int j = 0; j < row && j <= i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void upperTrianguler(int row, int col) {

    cout<<"Upper Trianguler pattern is :"<<endl;

    for(int i = 0; i < col; i++) {
        for(int j = row; j >= 0; j--) {
            cout<<"* ";
        }
        cout<<endl;
    }
}