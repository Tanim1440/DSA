#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    vector<int>v;
    for(int i=0;s1[i]!='\0';i++){
       if(s1[i]==s2[i]){
          v.push_back(0);
       }
       else v.push_back(1);
    }
    for(int j=0;j<v.size();j++){
        cout<<v[j];
    }
}