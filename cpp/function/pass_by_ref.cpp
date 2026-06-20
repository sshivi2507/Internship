#include <iostream>
using namespace std;
void show(int &a, int &b)
{
    a++;
    b++;
    cout<<a<<b;
}

int main() {
    int a, b;
    cout<< "enter a, b";
    cin >> a >> b;
    show(a, b);
    cout<< a << b;
    return 0;
}