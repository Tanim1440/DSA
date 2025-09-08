#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,x,ans;
        cin>>k>>x;
        long long temp=1;
        for(int i=0;i<k;i++){
           temp*=2;
        }
        ans=x*temp;
        cout<<ans<<endl;
    }
}