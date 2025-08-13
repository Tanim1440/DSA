#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans=0;
    if((a==0 && b==0)||(a==0 && c==0)||(b==0 && c==0)){
       ans=a+b+c;
    }
    else if(a==0 || b==0 || c==0){
        if(a==1 || b==1 || c==1){
            ans=a+b+c;
        }
        else if(a==0)ans=b*c;
        else if(b==0)ans=a*c;
        else if(c==0)ans=a*b;
    }
    else if(a==1 || b==1 || c==1){
        if((a==1&&b==1&&c==1)||(a==1&&b==1&&c==1)||(a==1&&b==1&&c==1)){
           ans=a+b+c;
        }
        else if(a==1&&b==1){
            ans=(a+b)*c;
        }
        else if(a==1&&c==1){
            ans=a+b+c;
        }
        else if(b==1&&c==1)ans=a*(b+c);
        else if(a==1)ans=(a+b)*c;
        else if(c==1)ans=a*(c+b);
        else if(b==1&&a>=c)ans=a*(b+c); 
        else if(b==1&&a<c)ans=(a+b)*c;
    }
    else{
        ans=a*b*c;
    }
    cout<<ans;
}