#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    vector<pair<int ,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    int flage=0;
    for(int j=0;j<n;j++){
       if(s>v[j].first){
        s+=v[j].second;
       }
       else{
         flage=1;
         break;
       }
    }
    if(flage==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
