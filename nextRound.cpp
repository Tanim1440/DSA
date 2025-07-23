#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int ans=0;
    int arr[n];
    for(int i=1;i<=n;i++){
       cin>>arr[i];
    }
    if(arr[1]==0){
        ans=0;
    }
    else if(arr[k]==0){
        for(int i=1;i<=k;i++){
            if(arr[i]==0){
                ans=i-1;
                break;
            }
          
        }
    }
    else{
        for(int j=k;j<=n;j++){
            if(j==n){
                ans=n;
                break;
            }
           else if(arr[j]!=arr[j+1]){
              ans=j;
              break;
        }
        
    }
    }
   cout<<ans;
}