#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n--){
    int s;
    cin>>s;
    int ans=0;
    int arr[s];
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    for(int j=0;j<s;j++){
      if(arr[j]==0){
        ans+=1;
      }
      else{
        ans+=arr[j];
      }
    }
    cout<<ans<<endl;
  }
}