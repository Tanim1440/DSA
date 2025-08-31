#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int x=max(a,b);
        int y=min(a,b);
        if(x>2*y+2) cout<<"NO"<<endl;
        else{
             a=c-a;
             b=d-b;
            x=max(a,b);
            y=min(a,b);
            if(x> 2*y+2)cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}