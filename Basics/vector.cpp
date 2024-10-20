#include<iostream>
#include<vector>
using namespace std;

int main() {

    // creating a linear vector array.

    vector<int> arr; // infinite size vector array untill memory end.

    arr.push_back(1); // use to insert element in a vector array.

    arr[0] = 4; // we can change value after add using push_back() function but we can not insert initially without push_back().

    cout<<arr[0]<<endl;
    return 0;
}