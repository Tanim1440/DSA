#include<iostream>
using namespace std;

void BinaryString(int n, int lastIndx, string ans){
    if(n==0){
        cout<<ans<<endl;
        return;
    }

    if(lastIndx!=1){
        BinaryString(n-1,0,ans+'0');
        BinaryString(n-1,1,ans+'1');
    }else{
        BinaryString(n-1,0,ans+'0');
    }
}
//without extra variable
// void BinaryString(int n, string ans){
//     if(n==0){
//         cout<<ans<<endl;
//         return;
//     }

//     if(ans[ans.size()-1]!='1'){
//         BinaryString(n-1,ans+'0');
//         BinaryString(n-1,ans+'1');
//     }else{
//         BinaryString(n-1,ans+'0');
//     }
// }
int main(){
    int n=3;
    string ans=" ";
    BinaryString(n,0,ans);
}