#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& arr);
void search(int item, const vector<int>& arr);

int main() {

    vector<int> arr = {4, -2, 9, 1, 7, -7, 1, 100, -387, 43, 35, -2};
    int item;

    cout << "Enter random integer between (-400 to 100) for search : ";
    cin >> item;

    // Call bubbleSort to sort the array
    bubbleSort(arr);

    // Call search to perform binary search
    search(item, arr);

    return 0;
}

void bubbleSort(vector<int>& arr) {

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void search(int item, const vector<int>& arr) {
    
    int left = 0, right = arr.size() - 1;
    int iteration = log2(arr.size()) + 1;

    while (left <= right) {
        int pointer = left + (right - left) / 2;

        if (arr[pointer] == item) {
            cout << item << " is found at position " << pointer + 1 << "." << endl;
            return;
        } else if (arr[pointer] > item) {
            right = pointer - 1;
        } else {
            left = pointer + 1;
        }

        iteration--;
    }

    cout << item << " not found in the array." << endl;
}
