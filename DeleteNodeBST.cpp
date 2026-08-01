#include<iostream>
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

TreeNode* insert(TreeNode* root,int value){
    if(root==NULL){
        root=new TreeNode(value);
        return root;
    }

    if(root->val>value){
        root->left=insert(root->left,value);
    }else{
        root->right= insert(root->right,value);
    }

    return root;
}

TreeNode* BuildBST(int* arr,int n){
    TreeNode* root=NULL;
    for(int i=0;i<n;i++){
        root=insert(root,arr[i]);
    }
    return root;
}
void Inorder(TreeNode* root){
    if(root==NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->val<<" ";
    Inorder(root->right);
}
TreeNode* findSuccessor(TreeNode* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
TreeNode* deleteNode(TreeNode* root, int value){
    if(root==NULL){
        return NULL;
    }
    if(root->val>value){
        root->left=deleteNode(root->left,value);
    }
    if(root->val<value){
        root->right=deleteNode(root->right,value);
    }
    else{
        //root->val==value
        //case:1(if that is leaf node)
        if(root->left==NULL && root->right==NULL){
            delete(root);
            return NULL;
        }
        //case:2(if the node has only one child node. left or right)
        if(root->left==NULL || root->right==NULL){
            return root->left==NULL ? root->right : root->left;
        }
        //case:3(if the node has both child) then find successor(successor is the next largest node of this node)
        else{
            TreeNode* IS=findSuccessor(root->right);
            root->val=IS->val;
            root->right=deleteNode(root->right,IS->val);
            return root;
        }
    }
     return root;
}
int main(){
    int arr2[9]={8,5,3,1,4,6,10,11,14};
    TreeNode* root=BuildBST(arr2,9);
    cout<<endl;
    Inorder(root);
    cout<<endl;
    deleteNode(root,11);
    Inorder(root);
}