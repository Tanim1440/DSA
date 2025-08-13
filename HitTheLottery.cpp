#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    while(n){
        if(n>=100){
           ans+=n/100;
           n=n%100;
        }
        else if(n<100 && n>=20){
            ans+=n/20;
            n=n%20;
        }
        else if(n<20 && n>=10){
            ans+=n/10;
            n=n%10;
        }
        else if(n<10 && n>=5){
            ans+=n/5;
            n=n%5;
        }
        else{
            ans+=n/1;
            n=n%1;

        }
    }
    cout<<ans;
}