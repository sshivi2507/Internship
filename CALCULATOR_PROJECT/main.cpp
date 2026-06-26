#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{
    double a,b;

    cout<<"Enter first number: ";
    cin>>a;

    cout<<"Enter second number: ";
    cin>>b;

    cout<<"Addition: "<<add(a,b)<<endl;
    cout<<"Subtraction: "<<subtract(a,b)<<endl;
    cout<<"Multiplication: "<<multiply(a,b)<<endl;
    cout<<"Division: "<<divide(a,b)<<endl;

    return 0;
}