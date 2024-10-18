#include<iostream>
using namespace std;

int main() {

    int dateNumber;

    cout<<"Enter a date numbre : ";
    cin>>dateNumber;

    switch(dateNumber) {
        case 1:
            cout<<"Saturday";
            break;
        case 2:
            cout<<"Sunday";
            break;
        case 3:
            cout<<"Monday";
            break;
        case 4:
            cout<<"Tuesday";
            break;
        case 5:
            cout<<"Wednesday";
            break;
        case 6:
            cout<<"Thursday";
            break;
        case 7:
            cout<<"Friday";
            break;
        default:
            cout<<"You enter a wront date number sir.";
    }

    return 0;
}