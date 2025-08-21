#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n,m;
       cin>>n;
       vector<char>a,b,c;
       for(int i=0;i<n;i++){
          char temp;
          cin>>temp;
          a.push_back(temp);
       }
       cin>>m;
       for(int j=0;j<m;j++){
          char temp2;
          cin>>temp2;
          b.push_back(temp2);
        }
        for(int k=0;k<m;k++){
            char temp3;
            cin>>temp3;
            c.push_back(temp3);
        }
        for(int i=0;i<m;i++){
            if(c[i]=='V'){
                a.insert(a.begin(),b[i]);
            }
            else{
                a.push_back(b[i]);
            }
        }
        for(int i=0;i<a.size();i++){
            cout<<a[i];
        }
        cout<<endl;

    }
}