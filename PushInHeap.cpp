#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Heap{
    vector<int>v;
    public:
    void push(int val){
        v.push_back(val); //O(1)
        int child=v.size()-1;
        int parent=(child-1)/2;
        while(child>=0 && v[child]>v[parent]){
            swap(v[child],v[parent]);
            child=parent;
            parent=(child-1)/2;
        }
    }
    void heapify(int rootIndx){
        if(rootIndx>=v.size()){
            return;
        }
        int leftIndx=(2*rootIndx)+1;
        int rightIndx=(2*rootIndx)+2;
        if(leftIndx>v.size()-1){
            return;
        }
        if(rightIndx>v.size()-1){
            if(v[rootIndx]>=v[leftIndx]){
                return;
            }
        }else{
            if(v[rootIndx]>=v[leftIndx] && v[rootIndx]>=v[rightIndx]){
                return;
            }
        }
        if(v[leftIndx]>v[rootIndx]){
            if(v[leftIndx]<v[rightIndx]){
                swap(v[rootIndx],v[rightIndx]);
                rootIndx=rightIndx;
            }else{
                swap(v[leftIndx],v[rootIndx]);
                rootIndx=leftIndx;
            }
        }else{
            swap(v[rootIndx],v[rightIndx]);
            rootIndx=rightIndx;
        }
        heapify(rootIndx);
    }
    void pop(){
        if(v.size()==1){
            v.pop_back();
        }
        else{
            swap(v[0],v[v.size()-1]);
            v.pop_back();
            heapify(0);
        }
    }
    int top(){
        return v[0];
    }
    bool isEmpty(){
        return v.size()==0;
    }
};

int main(){
    Heap heap;
    heap.push(9);
    heap.push(4);
    heap.push(8);
    heap.push(1);
    heap.push(2);
    heap.push(5);

    // heap.push(50);
    // heap.push(10);
    // heap.push(100);
    
    // cout<<heap.isEmpty();
    while(!heap.isEmpty()){
        cout<<"Top element:"<<heap.top()<<endl;
        heap.pop();
    }
}