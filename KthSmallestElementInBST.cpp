class Solution {
public:
    void inOrderSeq(TreeNode* root, vector<int>&vec){
        if(root==NULL){
            return;
        }
        inOrderSeq(root->left,vec);
        vec.push_back(root->val);
        inOrderSeq(root->right,vec);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int>vec;
        inOrderSeq(root,vec);
        return vec[k-1];
    }
};