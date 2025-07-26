#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='Y'){
           str.erase(str.begin()+i);
        }
        else{
            i++;
        }
    }
    if(str.length()==0){
        cout<<0;
    }
    else{
    transform(str.begin(),str.end(),str.begin(),::tolower);
    for(int i=0;str[i]!='\0';i++){
        cout<<'.'<<str[i];
    }
    }

}
