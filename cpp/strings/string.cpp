#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "\"enter n\"";
    cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    for(int i = 0;i < n;i++){
        cout << arr[i];
    }
    cout << "\n";
    while (cin.get() != '\n') {
}
    string s;
    cout<<"enter name";
    getline(cin,s);
    int l = 0;
    for(int i = 0;s[i]!='\0';i++){
        l++;
    }
   std:: cout<<s;
    return 0;
}