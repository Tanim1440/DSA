#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,px,py;
        cin>>n>>m;
        px=0,py=0;
        int ans=0;
        while(n--){
            int x,y;
            cin>>x>>y;
            ans+=x-px;
            if(((x-px+2)%2)!=((y-py+2)%2)){
                ans--;
            }
            px=x;
            py=y;
        }
        if(m!=px){
            ans+=m-px;
        }
        cout<<ans<<endl;
    }
}