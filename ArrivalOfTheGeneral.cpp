#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    int small=a[0],large=a[0];
    int sidx=0,lid=0;
    for(int i=0;i<n;i++){
        if(a[i]<=small){
            small=a[i];
            sidx=i;
        }
        if(a[i]>large){
            large=a[i];
            lid=i;
        }
    }
    if(lid>sidx){
        cout<<(n-sidx-1)+(lid-1);
    }
    else{
        cout<<(n-sidx-1)+lid;
    }
}