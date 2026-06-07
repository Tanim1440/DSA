#include<iostream>
using namespace std;
void findIndex(int *arr,int i,int key,int n){
    if(i==n){
        return;
    }
    if(arr[i]==key){
        cout<<i<<" ";
    }
    findIndex(arr,i+1,key,n);
    
}
int main(){
    int arr[]={3,2,4,5,6,2,7,2,2};
    int key=2;
    findIndex(arr,0,key,9);
}