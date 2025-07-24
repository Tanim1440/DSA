#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    int temp;
    sort(str.begin(),str.end());
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='+'){
            temp=i;
            break;
        }
    }
    int i=0;
    while(i<temp){
         swap(str[i],str[temp]);
         i+=2;
         temp++;
    }
    cout<<str;
    
}