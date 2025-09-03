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
    int max=v[0],count=0;
    int min=v[0];
    for(int j=1;j<n;j++){
       if(v[j]>max){
        max=v[j];
        count++;
       }
       else if(v[j]<min){
        min=v[j];
        count++;
       }
    }
    cout<<count;
}