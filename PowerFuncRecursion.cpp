#include<iostream>
using namespace std;
int power(int x,int n){

    if(n==0){
        return 1;
    }

    int halfResult=power(x,n/2);
    int fullResult=halfResult*halfResult;
    if(n%2==1){
        return x*fullResult;
    }
    return fullResult;
}
int main(){
cout<<power(2,3);
}