//Factorial claculator
#include<iostream>
#include<cmath>
using namespace std;

int fact(int num);

int main() {

    int num;

    cout<<"Enter a integer : ";
    cin>>num;

    cout<<"Factorial is : "<<fact(abs(num));

    return 0;
}

int fact(int num) {

    if(num == 0) {
        return 1;
    }

    return num * fact(num -1);
}