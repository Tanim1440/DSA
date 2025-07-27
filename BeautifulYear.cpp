#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=a+1;i<=9100;i++){
        int y=i;
        int arr[4];
        int j=0;
        while(y!=0){
            int rem=y%10;
            arr[j]=rem;
            j++;
            y=y/10;
        }
        if(arr[0]!=arr[1]&& arr[0]!=arr[2]&&arr[0]!=arr[3]&&arr[1]!=arr[2]&&arr[1]!=arr[3]&&arr[2]!=arr[3]){
           cout<<i;
           break;
        }

    }
}