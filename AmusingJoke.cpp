#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string temp;
    if(s1.length()+s2.length()!=s3.length()){
        cout<<"NO";
    }
    else{
         temp=s1+s2;
         sort(s3.begin(),s3.end());
         sort(temp.begin(),temp.end());
         if(s3==temp){
            cout<<"YES";
         }
         else{
            cout<<"NO";
         }
    }
}