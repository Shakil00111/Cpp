#include<iostream>
#include<string>
using namespace std;

const string name = "Shakil Ahmed";
const int age {30};
const string country = "Bangladesh";
const string city = "Rajshahi";

int main() {

    auto _case_ {age};

    switch(_case_) {
        case 30:
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Country: " << country << endl;
            cout << "City: " << city << endl;
            break;
        case 10:
            cout << "Name: John Doe" << endl;
            break;
        default:
            cout << "Unknown person" << endl;
    }

    return 0;
}