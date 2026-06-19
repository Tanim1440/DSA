#include<iostream>
using namespace std;
int ratInMaze(int maze[][4],int row,int col,string ans,int visited[][4]){
    if(row>=4||col>=4 || col<0 || row<0){
        return 0;
    }
    if(maze[row][col]==0 || visited[row][col]){
        return 0;
    }
    if(row==3 && col==3){
        cout<<ans<<endl;
        return 1;
    }
    visited[row][col]=true;
    
    int right=0;
    right= ratInMaze(maze,row,col+1,ans+'R',visited);
    
    int left=0;
    left=ratInMaze(maze,row+1,col,ans+'D',visited);
   
    int up=0;
     up= ratInMaze(maze,row-1,col,ans+'U',visited);
    
    int down=0;
    down=ratInMaze(maze,row,col-1,ans+'L',visited);
   
    visited[row][col]=false;
    return right+left+up+down;
}
int main(){
    int maze[4][4]={{1,0,0,0},
                  {1,1,0,1},
                  {1,1,0,0},
                  {0,1,1,1}};
    string ans="";
    int visited[4][4]={false};
    int total=ratInMaze(maze,0,0,ans,visited);   
    cout<<"total ways:"<<total<<endl;           
}