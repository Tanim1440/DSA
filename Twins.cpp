#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a;
    int sum=0,ans=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        sum+=temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    int temp=0,j=n-1;
    while(temp<=(sum)/2 && j>=0){
        temp+=a[j];
        ans++;
        j--;
    }
    cout<<ans;
}