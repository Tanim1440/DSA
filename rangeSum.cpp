class Solution {
public:
    int helper(TreeNode* root,int low, int high, int &sum){
       if(root==NULL){
            return 0;
        }
        if(root->val >= low && root->val <= high){
            sum+=root->val; 
            helper(root->left,low,high,sum);
            helper(root->right,low,high,sum);
        }
        else if(root->val < low){
            return helper(root->right,low,high,sum);
        }
        else{
            return helper(root->left,low,high,sum);

        }
        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        helper(root,low,high,sum);
        return sum;
    }
};