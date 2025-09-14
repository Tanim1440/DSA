#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        vector<int>a,b;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        for(int j=0;j<m;j++){
            int temp2;
            cin>>temp2;
            b.push_back(temp2);
        }
        cout<<n+m<<endl;
    }
}