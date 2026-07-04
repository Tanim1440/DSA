#include<iostream>
using namespace std;
class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0;
        int Lcount=0;
        int Rcount=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            (s[i]=='L')?Lcount++:Rcount++;
            if(Lcount==Rcount && Lcount!=0){
                ans++;
                Lcount=0;
                Rcount=0;
            }
        }
        return ans;
    }
};
