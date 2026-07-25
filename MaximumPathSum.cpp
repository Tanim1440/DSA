class Solution {
public:
    int helper(TreeNode* root, int &ans){
         if(root==NULL){
            return 0;
        }
        int left=helper(root->left, ans);
        int right=helper(root->right, ans);
        left=max(left,0);
        right=max(right,0);
        ans=max(ans,root->val+left+right);
        return root->val+max(left,right);
    }
    int maxPathSum(TreeNode* root) {
       
        int ans=INT_MIN;
        helper(root,ans);
        return ans;
    }
};