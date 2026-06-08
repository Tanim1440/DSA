#include<iostream>
using namespace std;
int pvtIndex(int *arr,int start, int end){
    int pvt=arr[end];
    int i=start-1;
    int j=start;
    while(j<=end-1){
        if(arr[j]<=pvt){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i],arr[end]);
    return i;
}
void quickSort(int *arr,int start,int end){
    if(start>=end){
        return;
    }
    int pvt=pvtIndex(arr,start,end);
    quickSort(arr,start,pvt-1);
    quickSort(arr,pvt+1,end);
}
void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={2,4,1,9,8,3};
    int n=6;
    quickSort(arr,0,5);
    printArr(arr,n);
}