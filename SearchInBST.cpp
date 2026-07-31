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

bool search(TreeNode* root, int key){
    if(root==NULL){
        return false;
    }

    if(root->val==key){
        return true;
    }
    if(root->val<key){
        return search(root->right,key);
    }else{
        return search(root->left,key);
    }
    return true;
}
int main(){
    int arr2[9]={8,5,3,1,4,6,10,11,14};
    TreeNode* root=BuildBST(arr2,9);
    cout<<search(root,20);
    cout<<endl;
}