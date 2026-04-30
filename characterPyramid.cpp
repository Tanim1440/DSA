#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    char temp='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<temp++<<" ";
        }
        cout<<endl;
    }
}