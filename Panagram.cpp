#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    sort(str.begin(),str.end());
    if(str.size()<26){
       cout<<"NO";
    }
    else{
        char c1='a',c2='A';
        int ans=0;
        for(int i=0;i<str.size();i++){
            if(str[i]==c1||str[i]==c2){
                ans++;
                c1++;
                c2++;
            }
        }
        if(ans==26){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}