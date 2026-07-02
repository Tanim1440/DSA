#include<iostream>
using namespace std;
int activitySelection(int* start, int* end,int n){
    int task=1;
    int currEnd=end[0];
    for(int i=1;i<n;i++){
        if(start[i]>=currEnd){
            task++;
            currEnd=end[i];
        }
    }
    return task;
}
int main(){
    int start[6]={1,3,0,5,8,5};
    int end[6]={2,4,6,7,9,9};
    cout<<activitySelection(start,end,6);
}