#include<iostream>
#include<string>
using namespace std;

int main() {

    int age;
    string name;

    cout << "Hello! What's your name? " << endl;
    getline(cin, name);

    cout << "Nice to meet you, Mr " << name << "!" << endl;
    cout << "You're looking so young! How old are you? " << endl;
    cin >> age;

    if (age < 0) {
        cerr << "Error: Age cannot be negative!" << endl;
        return 1; // Exit with an error code
    } else {
        cout << "I'm lille surprised that you are " << age << " years old!" << endl;
        cout << "You are still young!" << endl;
    }

    return 0;
}