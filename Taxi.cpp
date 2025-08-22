#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int count=0;
    sort(v.begin(),v.end());

    int i=0,j=n-1;
    while(i<=j){
        if(v[j]==4){
           count++;
           j--;
        }
        else{
            if(v[i]+v[j]==4){
                count++;
                i++;
                j--;
            }
            else if(v[i]+v[j]>4){
                   count++;
                   j--;
            }
            else{
                int temp=0;
                while(v[i]+v[j]+temp<=4){
                    temp+=v[i];
                    i++;
                }
                j--;
                count++;

            }
        }
    }
    cout<<count;
}