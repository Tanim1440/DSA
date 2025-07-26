#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    int one=0,count=1;
    for(int i=1;str[i]!='\0';i++){
        if(str[i]!=str[i-1]){
           one=max(one,count);
           count=1;
        }
        else if((str[i+1]=='\0' && count>=6)){
            one=max(one,count+1);
        }
        else{
            count++;
        }
        if(one>=7)
        break;
    }
    if(one>=7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}