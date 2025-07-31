#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int j=0,temp=0;
    string hlw="hello";
    for(int i=0;i<str.length();i++){
        if(str[i]==hlw[j]){
            j++;
            temp++;
        }
    }
    if(temp==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}