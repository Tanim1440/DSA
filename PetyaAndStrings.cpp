#include<iostream>
#include <algorithm> 
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int a=0,b=0;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    cout<<s1<<endl<<s2<<endl;
    for(int i=0;s1[i]!='\0';i++){
        if(s1[i]!=s2[i]){
            if(s1[i]>s2[i]){
              a+=s1[i];
            }
            else{
                b+=s2[i];
             }
         }
     }
     cout<<a<<" "<<b;
    // if(a>b){
    //     cout<<1;
    // }
    // else if(a<b){
    //     cout<<-1;
    // }
    // else{
    //     cout<<0;
    // }
}