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

void PrintInRange(TreeNode* root, int r1, int r2){
    if(root==NULL){
        return;
    }
    if(root->val>=r1 && root->val<=r2){
        PrintInRange(root->left,r1,r2);
        cout<<root->val<<" ";
        PrintInRange(root->right,r1,r2);
    }
    else if(root->val<r1){
        PrintInRange(root->right,r1,r2);
    }
    else{
        PrintInRange(root->left,r1,r2);
    }
}

int main(){
    int arr[6]={5,1,3,4,2,7};
    int arr2[9]={8,5,3,1,4,6,10,11,14};
    TreeNode* root=BuildBST(arr2,9);
    PrintInRange(root,6,12);
    cout<<endl;
}