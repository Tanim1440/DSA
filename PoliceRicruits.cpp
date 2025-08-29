#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int count=0,ans=0,flage=0;
    for(int j=0;j<n;j++){
             if(v[j]<0){
                if(count>0)
                   count--;
                else{
                   ans++;
                }
            }
            else{
                count+=v[j];
            }
        }
    cout<<ans;
}