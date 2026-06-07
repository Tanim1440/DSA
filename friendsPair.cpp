#include<iostream>
using namespace std;
int friendsPairWays(int n){
    if(n==1 || n==2){
        return n;
    }     //single way        +        pair way
    return friendsPairWays(n-1)+(n-1)*friendsPairWays(n-2);
}
int main(){
    int n;
    n=4;
    cout<<friendsPairWays(n);
}