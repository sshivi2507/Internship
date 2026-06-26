#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>vec;
    vec.push_back(2);
    vec.push_back(5);
    vec.push_back(3);
    vec.pop_back();
 for(int x:vec){
     cout<<x<<" ";
 }
    cout<<"\n"<<vec.size()<<endl;
    cout<<vec.capacity()<<"\n";
    cout<<vec[2]<<"\n";
    cout<<vec.front()<<"\n";
    cout<<vec.back();
    
     return 0;
}