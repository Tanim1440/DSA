#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
    string temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        for(int j=0;j<3;j++){
            if(temp[j]=='+'){
                x++;
                break;
            }
            else if(temp[j]=='-'){
                x--;
                break;
            }
        }
    }
    cout<<x;
}