#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int ans;
    int even=0;
    if(v[0]%2==0)even++;
    if(v[1]%2==0)even++;
    if(v[2]%2==0)even++;
    
    if(even>=2){
        for(int i=0;i<n;i++){
            if(v[i]%2!=0){
               ans=i;
            }
        }
    }
    else{
        for(int j=0;j<n;j++){
            if(v[j]%2==0){
                ans=j;
            }
        }
    }
    cout<<ans+1;
}