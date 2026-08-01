#include<iostream>
#include<vector>
using namespace std;
class TreeNode{
public:
   int val;
   TreeNode* left;
   TreeNode* right;

   TreeNode(int val){
    this->val=val;
    left=right=NULL;
   }
};

void getInOrderSeq(TreeNode* root,vector<int>&temp){
    if(root==NULL){
        return;
    }
    getInOrderSeq(root->left,temp);
    temp.push_back(root->val);
    getInOrderSeq(root->right,temp);
}

TreeNode* build(vector<int>&arr,int start,int end){
    if(start>end){
        return NULL;
    }
    int mid=(end+start)/2;
    TreeNode* root=new TreeNode(arr[mid]);
    root->left=build(arr,start,mid-1);
    root->right=build(arr,mid+1,end);
    return root;
}

TreeNode* buildBalanceBST(TreeNode* root){
    vector<int>temp;
    getInOrderSeq(root,temp);
    return build(temp,0,temp.size()-1);
}

void preOrder(TreeNode* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    TreeNode* root= new TreeNode(6);
    root->left=new TreeNode(5);
    root->left->left=new TreeNode(4);
    root->left->left->left=new TreeNode(3);

    root->right=new TreeNode(7);
    root->right->right=new TreeNode(8);
    root->right->right->right=new TreeNode(9);

    
    // int arr[7]={3,4,5,6,7,8,9};
    root=buildBalanceBST(root);
    preOrder(root);
    cout<<endl;
}