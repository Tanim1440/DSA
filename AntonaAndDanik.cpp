#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A=0,D=0;
    char str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    for(int j=0;j<n;j++){
        if(str[j]=='A'){
          A++;
        }
        else{
            D++;
        }
    }
    if(A<D){
        cout<<"Danik";
    }
    else if(A>D){
        cout<<"Anton";
    }
    else{
        cout<<"Friendship";
    }
}