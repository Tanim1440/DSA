#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> calculateSpan(vector<int>stock){
    stack<int>s;
    vector<int>span;
    span.push_back(1);
    s.push(0);
    for(int i=1;i<stock.size();i++){
        while(!s.empty() && stock[i]>=stock[s.top()]){
            s.pop();
        }
        if(s.empty()){
            span.push_back(i+1);
            s.push(i);
        }else{
            int leftHigh=s.top();
            span.push_back(i-leftHigh);
            s.push(i);
        }
        
    }
    return span;
}
int main(){
    vector<int>stock={100,80,60,70,60,85,100};
    vector<int>span=calculateSpan(stock);
    for(int i=0;i<span.size();i++){
        cout<<span[i]<<" ";
    }
}