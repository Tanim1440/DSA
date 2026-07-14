#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isPossible(vector<int>&nums,int k, int mid){
        int temp=0,l=1;
        for(int i=0;i<nums.size();i++){
            if(temp+nums[i]<=mid){
                temp+=nums[i];
            }else{
                l++;
                temp=nums[i];
            }
        }
        if(l<=k){
            return true;
        }else{
            return false;
        }
    }
    int splitArray(vector<int>& nums, int k) {
        int maxVal=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxVal=max(nums[i],maxVal);
        }
        int low=maxVal;
        int high=sum;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(isPossible(nums,k,mid)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
}; 