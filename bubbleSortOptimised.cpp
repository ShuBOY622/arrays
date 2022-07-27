#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<" ";
    }

};

void bubbleSort(int arr[],int size){
    
    bool swapped=0;

    for(int i=0;i<size-1;i++){          //or for(int i=1;i<size;i++)
        for(int j=0;j<size-i-1;j++){    //for(int j=0;j<size-i;j++)
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=1;

            }
        }
        if(swapped==0){
            break;
        }
    }
}
int main(){
        int arr[6]={0,5,12,34,111};

        bubbleSort(arr,6);
        printArray(arr,6);


    return 0;
}