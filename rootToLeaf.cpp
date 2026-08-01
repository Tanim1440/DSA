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

void rootToLeaf(TreeNode* root,vector<int>&store){
    if(root==NULL){
        return;
    }
    store.push_back(root->val);
    if(root->left==NULL && root->right==NULL){
        for(int i=0;i<store.size();i++){
            cout<< store[i]<<" ";
        }
        cout<<endl;
        store.pop_back();
        return;
    }
    rootToLeaf(root->left,store);
    rootToLeaf(root->right,store);
    store.pop_back();
}
int main(){
    int arr[6]={5,1,3,4,2,7};
    int arr2[9]={8,5,3,1,4,6,10,11,14};
    TreeNode* root=BuildBST(arr2,9);
    vector<int>V;
    rootToLeaf(root,V);
    cout<<endl;
}