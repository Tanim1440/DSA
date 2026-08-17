#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Car{
    public:
    int indx;
    int disSqr;

    Car(int indx, int disSqr){
        this->indx=indx;
        this->disSqr=disSqr;
    }

    bool operator < (const Car &obj) const{
        return this->disSqr > obj.disSqr;
    }
};

void nearByCars(vector<pair<int,int>>&pos, int K){
    vector<Car>carsSqr;
    for(int i=0;i<pos.size();i++){
        int disSqr=(pos[i].first*pos[i].first)+(pos[i].second*pos[i].second);
        carsSqr.push_back(Car(i,disSqr));
    }

    priority_queue<Car>pq(carsSqr.begin(),carsSqr.end());

    for(int i=0;i<K;i++){
        cout<<"Car:"<<pq.top().indx;
        pq.pop();
        cout<<endl;
    }
    
}

int main(){
    vector<pair<int, int>>pos;
    pos.push_back(make_pair(3,3));
    pos.push_back(make_pair(5,-1));
    pos.push_back(make_pair(-2,4));
    
    int K=2;
    nearByCars(pos,K);
}