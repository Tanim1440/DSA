#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=1;
    int temp=n;
    int rem=0;
    if(n==1){
        cout<<ans;
        return 0;
    }
    else{
    while(n--){
       int m;
       cin>>m;
       if(n==temp-1){
         rem=m%10;
       }
       else{
        int first=m/10;
        if(first==rem){
            ans++;
            rem=m%10;
        }
       }
     
    }
}
    cout<<ans;
}