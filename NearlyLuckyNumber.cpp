#include<iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int count=0;
    int rem=0;
    while(n!=0){
         rem=n%10;
         if(rem==7 || rem==4){
            count++;
         }
         n=n/10;
    }
    if(count==7||count==4){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}