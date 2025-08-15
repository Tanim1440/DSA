#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n=str.size();
    int count=0;
    vector<int>v(26,-1);
    if(n==2)count=0;
    else{
    for(int i=1;i<n;i+=3){
        v[int(str[i])-97]=1;
    }
    for(int i=0;i<26;i++){
        if(v[i]==1){
            count++;
        }
    }
}
    cout<<count;
}