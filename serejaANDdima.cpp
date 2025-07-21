#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int srj=0;
    int dip=0;
    int i=0,j=n-1;
    int temp=1;
    while(i<=j){
        if(temp==1){
          if(arr[i]>arr[j]){
            srj+=arr[i];
            i++;
            temp=0;
        }
        else{
            srj+=arr[j];
            j--;
            temp=0;
        }
        }
        else{
            if(arr[i]>arr[j]){
            dip+=arr[i];
            i++;
            temp=1;
        }
        else{
            dip+=arr[j];
            j--;
            temp=1;
        }
        }
        
    }
    cout<<srj<<" "<<dip;
}