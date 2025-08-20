#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<string,int>str;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        if(str.find(temp)==str.end()){
            cout<<"OK"<<endl;
            str[temp]=1;
        }
        else{
             cout<<temp<<str[temp]++<<endl;
        }
    }
}