#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    int upr=0,lower=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A'&& str[i]<='Z'){
            upr++;
        }
        if(str[i]>='a'&& str[i]<='z'){
            lower++;
        }
    }
    if(upr>lower){
        transform(str.begin(),str.end(),str.begin(),::toupper);
    }
    else {
        transform(str.begin(),str.end(),str.begin(),::tolower);
    }
    cout<<str;
    
}