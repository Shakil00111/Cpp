#include<iostream>
using namespace std;

int main() {

    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < len; i++) {
        int key = i;
        for (int j = i - 1; j >=0; j--) {
            if(arr[j] > arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i--;
            }
        }
        i = key;
    }

    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}