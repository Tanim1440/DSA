#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        int temp=1;
        while(n){
            int rem=n%10;
            if(rem!=0){
              v.push_back(rem*temp);
            }
            temp*=10;
            n=n/10;
        }
        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}