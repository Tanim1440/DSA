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
    int temp=1;
    int ans=1;
    for(int j=0;j<n-1;j++){
        if(v[j]<=v[j+1]){
            temp++;
            ans=max(ans,temp);
        }
        else{
            
            temp=1;
        }
    }
    cout<<ans;
}