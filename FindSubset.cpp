#include<iostream>
using namespace std;
void printSubsets(string str,string result){
    if(str.size()==0){
        cout<<result<<endl;
        return;
    }
    char latter=str[0];
    printSubsets(str.substr(1,str.size()-1),result+latter);
    printSubsets(str.substr(1,str.size()-1),result);
}
int main(){
    string str="abc";
    string result="";
    printSubsets(str,result);
}