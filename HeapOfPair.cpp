#include<iostream>
#include<queue>
#include<vector>
using namespace std;

//pair heap dont need this function if need to build maxHeap.
//for minHeap this function is required;
struct comparePair{
    bool operator()(pair<string,int>&p1, pair<string,int>&p2){
        return p1.second < p2.second;
    }
};


int main(){
    priority_queue<pair<string,int>, vector<pair<string,int>>, comparePair >pq;

    pq.push(make_pair("tanim",82));
    pq.push(make_pair("rakib",80));
    pq.push(make_pair("napi",72));

    while(!pq.empty()){
        cout<<pq.top().first<<" "<<pq.top().second<<endl;
        pq.pop();
    }
}