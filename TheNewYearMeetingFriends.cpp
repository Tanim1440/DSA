#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int temp=0;
    if((x1<x2 && x1>x3)||(x1<x3 && x1>x2)){
       temp=abs(x2-x1);
       temp+=abs(x1-x3);
    }
    else if((x2<x1 && x2>x3)||(x2<x3 && x2>x1)){
        temp=abs(x1-x2);
        temp+=abs(x2-x3);
    }
    else{
        temp=abs(x1-x3);
        temp+=abs(x3-x2);
    }
    cout<<temp;
}