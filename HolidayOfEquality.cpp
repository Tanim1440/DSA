#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end());
    for(int j=0;j<n;j++){
        if(arr[j]<arr[n-1]){
            ans+=arr[n-1]-arr[j];
        }
    }
    cout<<ans;
}