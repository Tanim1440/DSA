#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    long long n;
    cin>>n;
    long long temp=0;
   
    while(n){
     int i=0;
     while(n>=pow(3,i)){

        i++;
     }
     temp+=pow(3,i)+(i-1)*pow(3,i-2);
     n-=pow(3,--i);
   }
   cout<<temp<<endl;
   }
}