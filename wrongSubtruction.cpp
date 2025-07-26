#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int temp=n;
    while(k--){
          int last=temp%10;
          if(last==0){
            temp=temp/10;
          }
          else{
            temp-=1;
          }
    }
    cout<<temp;
}