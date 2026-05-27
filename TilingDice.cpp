#include<iostream>
using namespace std;

int TilingDice(int n){
    if(n==0 || n==1){
        return 1;
    }
    //horizontal choice + vertical choice
    return TilingDice(n-1)+TilingDice(n-2);
}
int main(){
    cout<<TilingDice(4);
}