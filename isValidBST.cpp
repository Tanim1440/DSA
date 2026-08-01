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

bool isValidBST(TreeNode* root, TreeNode* min, TreeNode* max){
    if(root==NULL){
        return true;
    }
    if(min!=NULL && root->val<=min->val){
        return false;
    }
    if(max!=NULL && root->val>=max->val){
        return false;
    }
    return isValidBST(root->left,min,root) &&  isValidBST(root->right,root,max);
}

int main(){
    int arr[6]={5,1,3,4,2,7};
    int arr2[9]={8,5,3,1,4,6,10,11,14};
    TreeNode* root=BuildBST(arr2,9);
    root->val=15;
    cout<<isValidBST(root,NULL,NULL);
    cout<<endl;
}