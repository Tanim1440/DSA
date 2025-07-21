#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    int count;
    string temp;
    for(int i=0;i<n;i++){
        temp=str[i];
        count=0;
      for(int j=0;temp[j]!='\0';j++){
        count++;
      }
      string ans;
      if(count>10){
        int  temp3=count-2;
        ans="";
        ans=temp[0]+to_string(temp3)+temp[count-1];
      }
      else{
        ans="";
        ans=temp;
      }
      cout<<ans<<endl;
    }
}