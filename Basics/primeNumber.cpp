#include<iostream>
using namespace std;

void isPrime(int num);

int main() {

    int  num;

    cout<<"Enter a number : ";
    cin>>num;

    isPrime(num);

    return 0;
}

void isPrime(int num) {

    if(num <= 0) {
        cout<<"You must input a number greater than 0."<<endl;
    } else {
        if(num == 1) {
            cout<<num<<" is not a prime number.";
        } else if(num == 2 || num == 3 || num == 5 || num == 7) {
            cout<<num<< "is prime number";
        } else {
            if(num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0) {
                cout<<num<<" is not a prime number.";
            } else {
                cout<<num<<" is a prime number.";
            }
        }
    }
}