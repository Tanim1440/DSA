#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int year=0;
    if(a==b){
        year++;
    }
    else if(a<b){
        int temp1=a,temp2=b;
        while(temp1<=temp2){
            temp1*=3;
            temp2*=2;
            year++;
        }
    }
    cout<<year;
}