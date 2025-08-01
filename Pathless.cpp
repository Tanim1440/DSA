#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[j];
        }
        if(s<sum){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else if(s==sum){
            cout<<-1<<endl;
        }
        else{
            int diff=s-sum;
            if(diff%2==0){
                cout<<-1<<endl;
            }
            else{
                if(diff<3){
                   sort(arr,arr+n);
                   for(int k=1;k<n-1;k++){
                    if(arr[k]==1){
                        swap(arr[k],arr[n-1]);
                    }
                   }
                   for(int l=0;l<n;l++){
                    cout<<arr[l]<<" ";
                   }
                   cout<<endl;
                }
                    else{
                    cout<<-1<<endl;
                }
            }
        }
    }
}