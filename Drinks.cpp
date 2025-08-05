#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long double ans=0;
    for(int i=0;i<n;i++){
        long double sum=0;
        cin>>sum;
        ans+=sum;
    }
    cout<<ans/n;
}
