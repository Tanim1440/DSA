#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<char>ans;
    int i=0;
    int temp=0,flage=0;
    while(str[i]!='\0'){
        if(str[i]=='W'&& str[i+1]=='U'&& str[i+2]=='B'){
            i+=3;
            temp++;
        }
        else{
            if(temp!=flage){
               ans.push_back(' ');
               flage=temp;
            }
            ans.push_back(str[i]);
            i++;
        }
    }
    if(ans[0]==' ')
    ans.erase(ans.begin()+0);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}