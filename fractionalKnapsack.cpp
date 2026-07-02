#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<double,int>p1,pair<double,int>p2){
    return p1.first>p2.first;
}
double fractionalKnapsack(vector<int>value, vector<int>weight, int w){
    int n=value.size();
    vector<pair<double,int>>utility(n,make_pair(0.0,0));
    for(int i=0;i<n;i++){
        double ratio=value[i]/(double)weight[i];
        utility[i]=make_pair(ratio,i);
    }
    sort(utility.begin(),utility.end(),compare);
    double ans=0;
    for(int i=0;i<utility.size();i++){
        int idx=utility[i].second;
        if(weight[idx]<=w){
            ans+=value[idx];
            w-=weight[idx];
        }else{
            ans+=utility[i].first*w;
            // break;
        }
    }
    return ans;
}
int main(){
    vector<int>value={60,100,120};
    vector<int>weight={10,20,30};
    int w=50;
    cout<<fractionalKnapsack(value,weight,w);
}