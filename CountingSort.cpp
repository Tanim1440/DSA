#include<iostream>
#include<unordered_map>
using namespace std;

void print(int *arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void CountingSort(int *arr, int n){
    int minVal=arr[0];
    int maxVal=arr[0];
    for(int i=0;i<n;i++){
        minVal=min(arr[i],minVal);
        maxVal=max(arr[i],maxVal);
    }
    unordered_map<int, int>feq;
    for(int i=0;i<n;i++){
        feq[arr[i]]++;
    }
    int temp=0;
    for(int j=minVal;j<=maxVal;j++){
        while(feq[j]){
            arr[temp]=j;
            feq[j]--;
            temp++;
        }
    }
    print(arr,n);
}

int main(){
    int arr[8]={1,4,1,3,2,4,3,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    CountingSort(arr,n);
}