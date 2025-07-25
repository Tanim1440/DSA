#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int count=0;
    if(n==1){
        cout<<0;
    }
    else{
          for(int i=1;str[i]!='\0';i++){
              if(str[i]==str[i-1]){
                count++;
              }
         }
         cout<<count;
    }
   
}