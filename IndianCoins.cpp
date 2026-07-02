#include<iostream>
#include<vector>
using namespace std;
int changeCoins(vector<int>coins,int v){
    int n=coins.size();
    int ans=0;
    for(int i=n-1;i>=0 && v>0;i--){
        if(coins[i]<=v){
            ans+=v/coins[i];
            v%=coins[i];
        }
    }
    return ans;
}
int main(){
    vector<int>coins={1,2,5,10,20,50,100,500,2000};
    int v=1099;
    cout<<changeCoins(coins,v);
}