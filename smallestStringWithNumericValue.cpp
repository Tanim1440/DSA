#include<iostream>
using namespace std;
class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans="";
        k-=n;
        int temp=n;
        while(temp--){
            ans+='a';
        }
        if(k!=0){
           int count=k/25;
           int rem=k%25;
           int indx=n-1;
           if(count>0){
            while(count--){
                ans[indx]='z';
                indx--;
            }
           }
           if(rem>0){
            ans[indx]=char(97+rem);
           }
        }
        return ans;
    }
};