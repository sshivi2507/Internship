#include <iostream>
using namespace std;

int show(int a){
   if(a>1) show(a-1);
   cout<<a;
}

int main() {
    int a;
    cout<< "enter a";
    cin >> a ;
    show(a);
    
    return 0;
}