#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        int ans=x%10;
        if(x>=1 && x<=9){
            cout<<x<<endl;
        }
        else{
               int temp=x;
                while(temp){
                     int rem=temp%10;
                     ans=min(ans,rem);
                     temp=temp/10;
                }
                cout<<ans<<endl;

        }
    }
}