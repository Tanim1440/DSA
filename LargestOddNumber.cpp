#include<iostream>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int indx=-1;
        int n=num.length();
        for(int i=n-1;i>=0;i--){
            if(num[i]%2!=0){
               indx=i;
               break;
            }
        }
        if(indx!=-1){
            for(int i=0;i<=indx;i++){
                ans+=num[i];
            }
        }
        return ans;
    }
};