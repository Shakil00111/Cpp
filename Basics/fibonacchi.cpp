#include<iostream>
using namespace std; 

int main() {

    int length, first = 0, second = 1;
    cout<<"Enter number of series : ";
    cin>>length;

    while(first <= length) {
        cout<<first<<" ";
        int temp = first;
        first = second;
        second += temp; 
    }

    return 0;
}