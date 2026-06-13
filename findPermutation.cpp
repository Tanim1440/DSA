#include<iostream>
using namespace std;
void findPermutation(string str,string ans){
    int n=str.size();
    if(n==0){
        cout<<ans<<endl;
    }
    for(int i=0;i<str.size();i++){
        char latter=str[i];
        string newString=str.substr(0,i)+str.substr(i+1,n-i-1);
        findPermutation(newString,ans+latter);
    }
}
int main(){
    string str="abc";
    string ans="";
    findPermutation(str,ans);
}