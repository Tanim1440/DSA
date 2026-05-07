#include<iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}

void InsertionSort(int *arr, int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        for(int j=i-1;j>=0;j--){
            if(arr[j]>curr){
                arr[j+1]=arr[j];
                arr[j]=curr;
            }
            else{
                break;
            }
        }
    }
    printArr(arr,n);
}

int main(){
    int arr[5]={5,4,1,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr,n);
}