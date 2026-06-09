#include<iostream>
#include<vector>
using namespace std;

    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }

int main(){
    vector<int>nums;
    nums={0,1,2,2,3,0,4,2};
    int resize=removeElement(nums,2);
    for(int i=0;i<resize;i++){
        cout<<nums[i]<<" ";
    }
}