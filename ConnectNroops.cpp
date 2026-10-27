#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int ConnectNropes(vector<int>lengths){
    priority_queue<int, vector<int>, greater<int>>pq(lengths.begin(),lengths.end());
    int cost=0;

    while(pq.size()>1){
        int min1=pq.top();
        pq.pop();
        int min2=pq.top();
        pq.pop();
        cost+=min1+min2;
        pq.push(min1+min2);
    }
    return cost;
}

int main(){
   vector<int>ropes={3,2,4,1};
   cout<<"min cost is :"<<ConnectNropes(ropes);
} 