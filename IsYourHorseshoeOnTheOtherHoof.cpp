#include<bits/stdc++.h>
using namespace std;
int main(){
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    int ans=0;
    if(s1==s2){
        ans++;
    }
    if(s1==s3){
        ans++;
    }
    if(s1==s4) ans++;

    if(s2==s3 && s2!=s1) ans++;
    if(s2==s4 && s2!=s1) ans++;
    if(s3==s4 && s3!=s2 && s3!=s1) ans++;

    cout<<ans;
}