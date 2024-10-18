#include<iostream>
using namespace std;

int main() {

    int arr[] = {4, -8, 3, 5, 7, 9, 4, 9, 2};

    int length = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < length; i++) {
        for(int j = i + 1; j < length; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<"Sorted array is : ";
    for(int i = 0; i < length; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}