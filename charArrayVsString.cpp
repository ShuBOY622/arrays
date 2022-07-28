#include <iostream>
using namespace std;
int main(){

    char arr[10];
    cout<<"enter elements in char array : ";
    cin>>arr;
    cout<<"elements are : "<<arr;
    cout<<endl;
    string s;
    cout<<"Ener elements in string ; ";
    cin>>s;
    cout<<"Elements are : "<<s;
    s.push_back(12);
     cout<<"Elements are : "<<s;

    return 0;
}