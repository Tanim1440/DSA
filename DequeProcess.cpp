#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>p;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            p.push_back(temp);
        }
        int j=0,i=n-1,count=0,temp=1,temp2=1;
        while(j<n-1 || i>0){
            if(p[j]<p[j+1]){
                temp++;
                j++;
            }
            else{
                count=max(count,temp);
                temp=1;
                j++;
            }
            if(j==n-1)count=max(count,temp);
            if(p[i]<p[i-1]){
             temp2++;
             i--;
            }
            else{
                count=max(count,temp2);
                temp2=1;
                i--;
            }
            if(i==0)count=max(count,temp2);
        }
        
        if(count<5){
            for(int i=0;i<n;i++){
                cout<<'L';
            }
            cout<<endl;
        }
        else{
            int i=0,j=n-1,flage=1;
            while(i<=j){
                if(flage%2==0){
                   if(p[i]<p[j]){
                    cout<<'L';
                    i++;
                    flage++;
                   }
                   else{
                    cout<<'R';
                    j--;
                    flage++;
                   }
                }
                else{
                    if(p[i]<p[j]){
                        cout<<'R';
                        j--;
                        flage++;
                    }
                    else{
                        cout<<'L';
                        i++;
                        flage++;
                    }
                }
            }
            cout<<endl;
        }
    }
}