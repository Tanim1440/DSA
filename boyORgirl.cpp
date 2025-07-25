#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    int count=1;
    sort(str.begin(),str.end());
    if(str.length()==1){
        cout<<"IGNORE HIM!";
        return 0;
    }
    else{
         for(int i=1;str[i]!='\0';i++){
        if(str[i-1]!=str[i]){
           count++;
        }
    }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    
}
