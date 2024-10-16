#include<iostream>
using namespace std;

// function declearation.............
void kadanseAlgo(int length, int arr[]);

// main function..............
int main() {
    int length = -1;

    while(length < 0) {
        cout<<"Enter length of the arrary : ";
        cin>>length;
    }

    int arr[length];

    cout<<"Enter arrray elements as number only. (0-9)"<<endl;

    for(int i = 0; i < length; i++) {
        cin>>arr[i];
    }

    kadanseAlgo(length, arr);

    return 0;
}

//function defination.............
void kadanseAlgo(int length, int arr[]) {

    int sum = 0;
    int max = 0;

    for(int i = 0; i < length; i++) {

        sum += arr[i];

        if(sum > max) {
            max = sum;
        }

        if(sum < 0) {
            sum = 0;
        }
    }

    cout<<"Maximum subarray sum is : "<<max<<endl;
}