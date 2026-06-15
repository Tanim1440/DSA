#include<iostream>
#include<vector>
using namespace std;
void printBoard(vector<vector<char>>board){
    int n=board.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"................\n";
}
bool isValid(vector<vector<char>>board,int row,int col){
    //horizontal
    int n=board.size();                  
    for(int j=0;j<col;j++){
        if(board[row][j]=='Q'){
            return false;
        }
    }
    //vertical
    for(int i=0;i<row;i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }
    //left diagonal
    for(int i=row,j=col;i>=0&&j>=0;i--,j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    //right diagonal
    for(int i=row,j=col;i>=0&&j<n;i--,j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }

    return true;
}
int nQueens(vector<vector<char>>board,int row){
    int n=board.size();
    int count=0;
    if(row==n){
        printBoard(board);
        return 1;
    }
    for(int j=0;j<n;j++){
        if(isValid(board,row,j)){
        board[row][j]='Q';
        count+=nQueens(board,row+1);
        board[row][j]='.';
        }
    }
    return count;
}
int main(){
    int n=5;
    vector<vector<char>>board;
    for(int i=0;i<n;i++){
        vector<char>row;
        for(int j=0;j<n;j++){
            row.push_back('.');
        } 
        board.push_back(row);
    }
    int count=nQueens(board,0);
    cout<<"total count:"<<count;
}