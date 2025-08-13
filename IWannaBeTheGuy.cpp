#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    int p,q,count=1;
    cin>>p;
    for(int i=0;i<p;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    cin>>q;
    for(int j=0;j<q;j++){
        int temp1;
        cin>>temp1;
        v.push_back(temp1);
    }
    sort(v.begin(),v.end());
    if(p==0 && q==0){
      count=0;
    }
    for(int i=1;i<v.size();i++){
        if(v[i-1]!=v[i]){
            count++;
        }
    }
    if(count==n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
}