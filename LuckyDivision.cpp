#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n;
    int flage=0;
    while(temp){
        int rem=temp%10;
        if(rem!=4 && rem!=7){
            flage++;
            break;
        }
        temp=temp/10;
    }
    if(flage==1){
        if(n%4==0 || n%7==0 || n%47==0 || n%74==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else{
        cout<<"YES";
    }
}