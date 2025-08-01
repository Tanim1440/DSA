#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0,temp=1,ans;
        while(n!=count){
            if(temp%3==0 || temp%10==3){
                temp++;
            }
            else{
                count++;
                ans=temp;
                temp++;             
            }
        }
        cout<<ans<<endl;
    }
}