#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int temp=1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i%2!=0){
                cout<<'#';
            }
            else{
                if(temp%2!=0 && j==n){
                   cout<<'#';
                }
                else if(temp%2==0 && j==1){
                    cout<<'#';
                }
                else{
                    cout<<'.';
                } 
            }
        }
        cout<<endl;
        if(i%2==0)temp++;
    }
}