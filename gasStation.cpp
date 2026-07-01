#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start=0;
        int currgas=0;
        int totalgas=0;
        for(int i=0;i<gas.size();i++){
            currgas+=gas[i]-cost[i];
            totalgas+=gas[i]-cost[i];
            if(currgas<0){
                start=i+1;
                currgas=0;
            }
        }
        return totalgas>=0?start:-1;
    }
};