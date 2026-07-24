#include<iostream>
#include<map>
#include<string>
using namespace std;
int main(){
    map<int,string>m;
    m[101]="Tanim";
    m[102]="Kamrul";
    m[103]="komol";

    for(auto it: m){
        cout<<"key="<<it.first<<" "<<"value="<<it.second<<endl;
    }
    cout<<m.count(101)<<endl;
    cout<<m.count(202)<<endl;
}