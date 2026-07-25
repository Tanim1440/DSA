class Solution {
public:
    string helper(TreeNode* root,unordered_map<string,int>&m,vector<TreeNode*>&v){
        if(root==NULL){
            return "";
        }
        string left=helper(root->left,m,v);
        string right=helper(root->right,m,v);
        string temp=to_string(root->val)+','+left+','+right;
        m[temp]++;
        if(m[temp]==2){
            v.push_back(root);
        }
        return temp;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map<string,int>m;
        vector<TreeNode*>v;
        helper(root,m,v);
        return v;
    }
};