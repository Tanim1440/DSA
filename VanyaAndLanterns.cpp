#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    long long l;
    cin>>n>>l;
    vector<long long>a;
    for(int i=0;i<n;i++){
        long long temp;
        cin>>temp; 
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    double maximum=0;
    for(int i=0;i<n-1;i++){
       if(a[i+1]-a[i]>maximum){
        maximum=a[i+1]-a[i];
       }
    }
    double mx=maximum/2.0;
    if(a[0]>mx){
        mx=a[0];
    }
    if(l-a[n-1]>mx){
        mx=l-a[n-1];
    }
    cout<<fixed<<setprecision(10)<<mx;

}