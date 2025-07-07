#include<iostream>
using namespace std;

int main(){
 
    int arr[] = {9, 8, 7, 6, 5, 4};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++) {
        int key = arr[i];
        int j = i;
        
        for (j-1; j >= 0; j--) {
            if (arr[j] > key) {
                arr[j+1] = arr[j];
            }
        }

        arr[j+1] = key;
    }

    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}