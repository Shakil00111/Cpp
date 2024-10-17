#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {3, 5, 9, 7, 9, 1, 43, 98, 78, 97, 77};

    int item;

    cout<<"Enter a item for search (0 - 100) : ";
    cin>>item;

    for(int i = 0; i < arr.size(); i++) {
        if(item == arr[i]) {
            cout<<"\033[32m"<<item<<" is found."<<"\033[0m";
            return 0;
        }
    }

    cout<<item<<" not found.";
    return 0;
}