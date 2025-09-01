#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        int temp=0;
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                temp=1;
                break;
            }    
        }
        if(temp){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}