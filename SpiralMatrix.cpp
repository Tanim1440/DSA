#include<iostream>
using namespace std;

void SpiralMatrix(int arr[][4], int n, int m){
    int srtRow=0, srtCol=0;
    int endRow=n-1, endCol=m-1;
    
    while(srtRow<=endRow && srtCol<=endCol){

        for(int j=srtCol;j<=endCol;j++){
        cout<<arr[srtRow][j]<<" ";
        }

        for(int i=srtRow+1;i<=endRow;i++){
            cout<<arr[i][endCol]<<" ";
        }

        for(int j=endCol-1;j>=srtCol;j--){
            if(srtRow==endRow){
                break;
            }
            cout<<arr[endRow][j]<<" ";
        }

        for(int i=endRow-1;i>=srtRow+1;i--){
            if(srtCol==endCol){
                break;
            }
            cout<<arr[i][srtCol]<<" ";
        }

        srtRow++,endRow--;
        srtCol++,endCol--;
    }
}

int main(){
    int arr[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}};

    int arr2[3][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12}};               
    int n=3,m=4;
    SpiralMatrix(arr2,n,m);
}