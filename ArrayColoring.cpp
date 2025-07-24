#include<iostream>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int arr[n];
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        if(arr[i]%2!=0){
            odd++;
        }
    }
    if(n==1){
        cout<<"NO"<<endl;
    }
    else if((even>1)&&(odd==0)){
        cout<<"YES"<<endl;
    }
    else if((odd>1)&&(even==0)){
        if(odd%2==0){
            cout<<"YES"<<endl;
        }
        if(odd%2!=0){
            cout<<"NO"<<endl;
        }
    }
    else{
         if(even==odd){
            if(even%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
         }
         else{
            if(odd%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
         }
         
    }
   }
}
    