#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<2*n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int count=0;
    for(int j=0;j<(2*n)-1;j+=2){
    int temp2=v[j];
    int i=1;
    while(i<(2*n)){
         if(i==j+1)i+=2;
         else{
            if(v[i]==temp2){
                count++;
            }
            i+=2;
         }
        } 
    }
    cout<<count;
}