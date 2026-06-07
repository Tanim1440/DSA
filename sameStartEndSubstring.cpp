#include<iostream>
using namespace std;
void countFreq(string str,int i,int freq[]){
    if(i==str.size()){
        return;
    }
    freq[str[i]-'a']++;
    countFreq(str,i+1,freq);
}
int main(){
    string str="aba";
    int freq[26]={0};
    countFreq(str,0,freq);
    int ans=0;
    for(int i=0;i<26;i++){
       ans+=(freq[i]*(freq[i]+1))/2;
    }
    cout<<ans<<endl;
}