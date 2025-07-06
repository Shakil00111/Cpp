#include<iostream>
using namespace std;

int main() {

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len-1; i++) {
        for (int j = i+1; j < len-1; j++) {
            if (arr[i] > arr[j]) {

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < len-1; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}