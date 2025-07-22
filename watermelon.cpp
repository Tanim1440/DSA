#include<iostream>
using namespace std;
void watermelon(int n){
     if(n%2!=0){
        cout<<"NO";
        return;
     }
     else{
        if(n==2){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
     }
}
int main(){
    int n;
    cin>>n;
    watermelon(n);
}