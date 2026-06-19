#include<iostream>
#include<vector>
using namespace std;
void solve(int position,string digits,int length,vector<vector<char>>L,string ans){
    if(position==length){
        cout<<ans<<endl;
        return;
    }else{
        vector<char>letter=L[digits[position]-'0'];
        for(int i=0;i<letter.size();i++){
            solve(position+1,digits,length,L,ans+letter[i]);
        }
    }
}
void digitCombinations(vector<vector<char>>L,string digits){
    string ans="";
    int length=digits.size();
    if(length==0){
        cout<<"";
        return;
    }
    solve(0,digits,length,L,ans);
}
int main(){
    vector<vector<char>>L={{},{},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'}};
    string digits="23";
    digitCombinations(L,digits);
}