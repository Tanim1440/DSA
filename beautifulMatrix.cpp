#include<iostream>
using namespace std;
int main(){
    int mtx[5][5];
    int temp[2];
    int ans=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>mtx[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(mtx[i][j]==1){
               temp[0]=i;
               temp[1]=j;
               break;
            }
        }
    }
    if(temp[0]>2){
       ans+=(temp[0]-2);
    }
    else if(temp[0]<2){
        ans+=(2-temp[0]);
    }
    if(temp[1]>2){
       ans+=(temp[1]-2);

    }
    else if(temp[1]<2){
        ans+=(2-temp[1]);

    }
    cout<<ans;
}