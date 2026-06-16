#include<iostream>
using namespace std;
int gridWays(int row,int col,int n,int m,string ans){
    if(row==n-1&&col==m-1){
        cout<<ans<<endl;
        return 1;
    }
    if(row==n||col==m){
        return 0;
    }
    //right turn
    int right=gridWays(row+1,col,n,m,ans+'R');
    //down turn
    int down=gridWays(row,col+1,n,m,ans+'D');
    return right+down;
}
int main(){
    int n=3;
    int m=3;
    string ans="";
    cout<<gridWays(0,0,n,m,ans);
}