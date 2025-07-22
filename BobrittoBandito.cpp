#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int n,m,l,r,temp;
    cin>>n>>m>>l>>r;
    temp=m+l;
    int m2=-m;
    if(temp>=0){
      cout<<l<<" "<<temp<<endl;
    }
    else{
        cout<<m2<<" "<<0<<endl;
    }
    }
}