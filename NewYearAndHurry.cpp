#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int temp=240-k;
    int i=1,count=0;
    while(temp>=i*5 && count<n){
       temp-=i*5;
       count++;
       i++;
    }
    cout<<count;
}