#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void heapify(int i, vector<int>&arr, int n){
    int l=2*i+1;
    int r=2*i+2;
    int maxIndx=i;
    if(l<n && arr[l]>arr[maxIndx]){
        maxIndx=l;
    }
    if(r<n && arr[r]>arr[maxIndx]){
        maxIndx=r;
    }

    if(maxIndx!=i){
        swap(arr[maxIndx],arr[i]);
        heapify(maxIndx,arr,n);
    }
}

void heapSort(vector<int>&arr){
    int n=arr.size();
    for(int i=(n/2)-1;i>=0;i--){
        heapify(i,arr,n);
    }

    for(int j=n-1;j>=0;j--){
        swap(arr[0],arr[j]);
        heapify(0,arr,j);
    }
}

int main(){
    vector<int> arr={1,4,2,5,3};
    heapSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}