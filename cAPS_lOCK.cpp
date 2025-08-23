#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str;
    cin>>str1;
    str=str1;
    int count=1;
    int flage=0;
    for(int i=0;i<str.size();i++){
        if(str[0]<'A'|| str[0]>'Z')count=0;
        if(i==0){
            if(str[0]<'A'|| str[0]>'Z'){
            str[0]=str[0]-32;
            }
        }
        else{
            if(str[i]>='A'&& str[i]<='Z'){
                str[i]=str[i]+32;
            }
            else{
                 flage=1;
            }
        }
    }
    if(flage==1){
        for(int i=0;i<str1.size();i++){
            cout<<str1[i];
        }
    }
    else if(count==1){
        transform(str1.begin(),str1.end(),str1.begin(),::tolower);
        for(int i=0;i<str1.size();i++){
            cout<<str1[i];
        }
    }
    else{
    for(int i=0;i<str.size();i++){
        cout<<str[i];
    } 
}
}