#include<iostream>
using namespace std;

int main() {

    //printing massages 

    cout<<"Hello world!"<<endl;


    // using loop 

    for(int i = 0 /*Initial value of i*/ ; i < 10 /*check i is greater or less than 10*/ ;
     i++ /*incrment operator is always works at last.
            when the loop compleate it's work it increament by one*/) {
        cout<< i << " ";
    }

    cout<<endl;

    // basic mathematical operations

    int num1 = 789; /*int is a data type evey number take palce under "int, float, double". */
    int num2 = 578;

    int sum = num1 + num2;

    cout<<"Sum of "<<num1<<" and "<<num2<<" is : "<<sum;

    int sub = num1 - num2;

    cout<<"Substitution of "<<num1<<" and "<<num2<<" is : "<<sub;

    int multi = num1 * num2;

    cout<<"Multiplication of "<<num1<<" and "<<num2<<" is : "<<multi;

    float div = num1 / num2;

    cout<<"Division of "<<num1<<" and "<<num2<<" is : "<<div;

    return 0;
}