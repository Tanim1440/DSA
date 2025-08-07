#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int ans=0;
        string str;
        cin>>str;
        int i=0,j=5;
        while(i<j){
          ans+=(str[i++]-str[j--]);
        }
     if(ans==0){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
    }
}