#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        while(n){
            int rem=n%10;
            ans+=rem;
            n=n/10;
        }
        cout<<ans<<endl;
    }
}