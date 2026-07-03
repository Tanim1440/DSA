#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Job{
public:
    int indx;
    int time;
    int value;

    Job(int indx, int time, int value){
        this->indx=indx;
        this->time=time;
        this->value=value;
    }
};
int maxProfit(vector<pair<int, int>>pair){
    int n=pair.size();
    vector<Job>Jobs;
    
    for(int i=0;i<n;i++){
        Jobs.emplace_back(i,pair[i].first,pair[i].second);
    }
    
    sort(Jobs.begin(),Jobs.end(),[](Job &a, Job &b){
        return a.value>b.value;
    });
    
    cout<<"working job: "<<Jobs[0].indx<<endl;
    int profit=Jobs[0].value;
    int currTime=2;
    for(int i=1;i<n;i++){
       if(Jobs[i].time>=currTime){
        cout<<"working job: "<<Jobs[i].indx<<endl;
        profit+=Jobs[i].value;
        currTime++;
       }
    }
    return profit;
}
int main(){
    int n=4;
    vector<pair<int, int>>jobs(n,make_pair(0,0));
    jobs[0]=make_pair(4,20);
    jobs[1]=make_pair(1,10);
    jobs[2]=make_pair(1,30);
    jobs[3]=make_pair(1,40);

    cout<<"Total profit: "<< maxProfit(jobs);
}