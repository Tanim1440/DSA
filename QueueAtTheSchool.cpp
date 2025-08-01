#include<bits/stdc++.h>
using namespace std;
int main(){
       int n,t;
       cin>>n>>t;
       string str;
       cin>>str;
       while(t--){
        int i=0;
        while(i<n-1){
            if(str[i]=='B'&& str[i+1]=='G'){
              swap(str[i],str[i+1]);
              i+=2;
            }
            else{
                i++;
            }
        }
       }
       cout<<str;
}