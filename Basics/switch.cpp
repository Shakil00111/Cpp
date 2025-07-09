#include<iostream>
#include<limits>
#include<iomanip>

using namespace std;

int main() {
 
    int num = 10;
    int num2 = 53;

    switch(num) {
        case 0:
            cout << "hi" << endl;
            break;  
        case 10:
            cout << "num is 10" << endl;
            switch(num2) {
                case 54:
                    cout << "num2 is 54" << endl;
                    break;
                case 55:
                    cout << "num2 is 55" << endl;
                    break;
                default:
                    cout << "num2 is neither 54 nor 55" << endl;
            }
            break;
        default:
            cout << "num is not 0 or 10" << endl;
    } 

    return 0;    
}