#include<iostream>
#include<stack>
using namespace std;
void printStack(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
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
void ReverseStack(stack<int>&s){
    if(s.empty()){
        return;
    }
    int temp=s.top();
    s.pop();
    ReverseStack(s);
    PAB(s,temp);
}
int main(){
    stack<int>s;
    s.push(3);
    s.push(2);
    s.push(1);
    cout<<"before reverse:";
    printStack(s);
    ReverseStack(s);
    cout<<"after reverse:";
    printStack(s);
}