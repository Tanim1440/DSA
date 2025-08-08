#include<bits/stdc++.h>
using namespace std;
int main(){
int t; 
cin>>t;
while(t--){
   int n,x;
   cin>>n>>x;
   string s;
   cin>>s;
   if(x==1 || x==n){
      cout<<1<<endl;
      continue;
   }
   x--;
        int inf = 1e9;
        int lf=-inf, rg=inf;
        for(int i=x-1; i>=0; i--)
            if(s[i]=='#') {
                lf=i;
                break;
            }
        for(int i=x+1; i<n; i++)
            if(s[i]=='#') {
                rg=i;
                break;
            }
        if(lf==-inf && rg==inf) {
            cout << "1\n";
            continue;
        }
        cout << max(min(x+1, n-rg+1), min(lf+2, n-x)) << '\n';
      }    
return 0;
}