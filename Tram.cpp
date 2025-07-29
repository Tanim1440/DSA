#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=0,ans=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(i==0){
            temp=b;
        }
        else{
            temp=(temp-a)+b;
        }
        ans=max(temp,ans);
    }
    cout<<ans;
}