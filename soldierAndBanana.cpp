#include<iostream>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int cost=0;
    for(int i=1;i<=w;i++){
        cost+=(k*i);
    }
    if(n>=cost){
        cout<<0;
    }
    else{
        int need;
        need=cost-n;
        cout<<need;
    }
}