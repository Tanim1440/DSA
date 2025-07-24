#include<iostream>
#include<algorithm> 
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int a=0,b=0;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    //cout<<s1<<endl<<s2<<endl;
    int i=0,j=0;
    while((s1[i]&&s2[j])!='\0'){
        if(s1[i]==s2[j]){
            i++;
            j++;
        }
        else if(s1[i]>s2[j]){
            while(s1[i]!=s2[j]){
                j++;
                b+=s2[j];
            }
        }
        else if(s1[i]<s2[j]){
            while(s1[i]!=s2[j]){
                i++;
                a+=s2[j];
            }
        }
    }
    while((s1[i]=='\0')&&(s2[j]!='\0')){
        int c1=0;
        if(s1[i]==s2[j]){
             if(c1>0){
                b+=s2[j];
            }
            j++;
            c1++;
           
        }
       else{
        b+=s2[j];
        j++;
       }
    }
    while((s1[i]!='\0')&&(s2[j]=='\0')){
        int c2=0;
        if(s1[i]==s2[j]){
             if(c2>0){
                a+=s1[i];
            }
            i++;
            c2++;
           
        }
       else{
        a+=s1[i];
        i++;
       }
    }
     cout<<a<<" "<<b<<endl;
    if(a>b){
        cout<<1;
    }
    else if(a<b){
        cout<<-1;
    }
    else{
        cout<<0;
    }
}