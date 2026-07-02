#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int minAbsoluteDiff(vector<int>A, vector<int>B){
    int n=A.size();
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int ans=0;
    for(int i=0;i<n;i++){
        int value=A[i]-B[i];
        ans+=abs(value);
    }
    return ans;
}
int main(){
    vector<int>A={1,2,3};
    vector<int>B={2,1,3};
    cout<<minAbsoluteDiff(A,B);
}