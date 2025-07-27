#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    vector<int>arr;
    int ans=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    for(int j=0;j<n;j++){
        if(arr[j]>h){
            ans+=2;
        }
        else{
            ans+=1;
        }
    }
    cout<<ans;
}