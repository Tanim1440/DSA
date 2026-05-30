#include<iostream>
#include<string>
using namespace std;

void RemoveDuplicates(string str,string ans,int i, bool map[26]){
    if(i==str.size()){
        cout<<"ans:"<<ans;
        return;
    }
    
int indx=(int)(str[i]-'a');
if(map[indx]){
    RemoveDuplicates(str,ans,i+1,map);
}else{
    map[indx]=true;
    RemoveDuplicates(str,ans+str[i],i+1,map);
}
}
int main(){
    string str="aabbcc";
    string ans="";
    bool map[26]={false};
    RemoveDuplicates(str,ans,0,map);
}