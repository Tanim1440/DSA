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

TreeNode* buildBalanceBST(int* arr,int start,int end){
    if(start>end){
        return NULL;
    }
    int mid=(end+start)/2;
    TreeNode* root=new TreeNode(arr[mid]);
    root->left=buildBalanceBST(arr,start,mid-1);
    root->right=buildBalanceBST(arr,mid+1,end);
    return root;
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
    int arr[7]={3,4,5,6,7,8,9};
    TreeNode* root=buildBalanceBST(arr,0,6);
    preOrder(root);
    cout<<endl;
}