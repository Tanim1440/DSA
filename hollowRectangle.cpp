#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"*"<<" ";
        for(int j=1;j<n;j++){
            if(i==0 || i==n-1){
                cout<<"*"<<" ";
            }
            else{
                 cout<<"  ";
            }
        }
        cout<<"*";
        cout<<endl;
    }
}