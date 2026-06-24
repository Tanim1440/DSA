#include<iostream>
#include<stack>
using namespace std;
void PAB(stack<int>&s,int val){
    if(s.empty()){
        s.push(val);
        return;
    }
    int temp=s.top();
    s.pop();
    PAB(s,val);
    s.push(temp);
}
void printStack(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main(){
    stack<int>s;
    s.push(3);
    s.push(2);
    s.push(1);
    int val=4;
    PAB(s,val);
    printStack(s);
}