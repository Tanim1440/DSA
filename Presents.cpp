#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p[n],ans[n];
    for(int i=1;i<=n;i++){
        cin>>p[i];
    }
    for(int j=1;j<=n;j++){
       ans[p[j]]=j;
    }
    for(int k=1;k<=n;k++){
        cout<<ans[k]<<" ";
    }
}