#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    for(int j=0;j<n;j++){
        if(arr[j]==1){
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";

}