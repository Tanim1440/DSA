#include<iostream>
using namespace std;

void DiagonalSum(int matrix[][4], int n, int m){
    int primaryDiagonal=0;
    int secondaryDiagonal=0;
    for(int i=0;i<n;i++){
       primaryDiagonal+=matrix[i][i];
       secondaryDiagonal+=matrix[i][n-i-1];
    }
    int totalSum=0;
    if(n%2==1){
      totalSum=(primaryDiagonal+secondaryDiagonal)-matrix[n/2][m/2];
    }else{
        totalSum=primaryDiagonal+secondaryDiagonal;
    }
    cout<<"Total Diagonal sum:"<<totalSum;
}

int main(){
    // int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matrix2[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n=4,m=4;
    DiagonalSum(matrix2,n,m);
}