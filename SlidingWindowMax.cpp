#include<iostream>
#include<vector>
#include<queue>
using namespace std;

void SlidingWindowMax(vector<int>arr, int K){
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<K;i++){
        pq.push(make_pair(arr[i],i));
    }
    cout<<"Sliding Window max :"<<pq.top().first<<" ";

    for(int i=K;i<arr.size();i++){
        
        while(pq.top().second<=(i-K) && !pq.empty()){
            pq.pop();
        }
        pq.push(make_pair(arr[i],i));
        cout<<pq.top().first<<" ";
    }
}

int main(){
    vector<int> arr={1,3,-1,-3,5,3,6,7};
    SlidingWindowMax(arr,3);
}