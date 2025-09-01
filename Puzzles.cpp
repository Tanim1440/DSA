#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v;
    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int temp=v[m-1]-v[m-n];
    int i=m-n,j=m-1;
    while(i+j>=n-1){
        int temp2= v[j]-v[i];
        temp=min(temp,temp2);
        j--,i--;
    }
    cout<<temp;
}