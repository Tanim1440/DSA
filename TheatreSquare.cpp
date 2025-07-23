#include<iostream>
using namespace std;
int main(){
    long long n,m,a;
    cin>>n>>m>>a;
   long long area,ans;
    if(n<a){
        n=a;
    }
    if(m<a){
        m=a;
    }
    if(n>a){
        int rem1=n%a;
        if(rem1!=0){
           int need1=a-rem1;
        n+=need1;
        }
    }
    if(m>a){
        int rem2=m%a;
        if(rem2!=0){
          int need2=a-rem2;
        m+=need2;
        }
    }
    area=n*m;
    ans=area/(a*a);
    cout<<ans;
}