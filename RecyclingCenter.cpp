#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  long long a,c;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>c;
    int ans=0;
    vector<long long>arr;
    for(int j=0;j<a;j++){
      int temp;
      cin>>temp;
      arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());

    int k=0;
    for(int l=0;l<a;l++){
     if((arr[l]*pow(2,k))<=c){
       ans++;
       k++; 
     }
   }
    cout<<a-ans<<endl;
  }
  
}