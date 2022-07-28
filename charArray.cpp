#include <iostream>
using namespace std;

int  charArraySize(char arr[]){
    int count=0;
    for(int i=0;arr[i]!=0;i++){
        count++;
    }
    return count;
}

int main(){
    char arr[7];

    cout<<"Enter character array : ";
    cin>>arr;

    
int size=charArraySize(arr);
cout<<"Size of array is : "<<size;



    return 0;
}