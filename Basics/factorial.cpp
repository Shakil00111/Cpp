//Factorial claculator
#include<iostream>
#include<cmath>
using namespace std;

double fact(double num);

int main() {

    double num;

    cout<<"Enter a doubleeger : ";
    cin>>num;

    if(num >= 0) {
        cout<<"Factorial is : "<<fact(num);
    } else {
        cout<<"Factorial is : "<<fact(abs(num)) * (-1);
    }

    return 0;
}

double fact(double num) {

    if(num == 0) {
        return 1;
    }

    return num * fact(num -1);
}