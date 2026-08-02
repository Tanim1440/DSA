#include<iostream>
#include<climits>
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

void getInOrderSeq(TreeNode* root,vector<int>&v){
    if(root==NULL){
        return;
    }
    getInOrderSeq(root->left,v);
    v.push_back(root->val);
    getInOrderSeq(root->right,v);
}

void merge(vector<int>&v1, vector<int>&v2, vector<int>&final){
    int i=0,j=0,k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<=v2[j]){
            final.push_back(v1[i++]);
        }else{
            final.push_back(v2[j++]);
        }
    }
    while(i<v1.size()){
        final.push_back(v1[i++]);
    }
    while(j<v2.size()){
        final.push_back(v2[j++]);
    }
}

TreeNode* arrToBST(int low, int high, vector<int>&v){
    if(low>high){
        return NULL;
    }
    int mid=(low+high)/2;
    TreeNode* curr= new TreeNode(v[mid]);
    curr->left=arrToBST(low,mid-1,v);
    curr->right=arrToBST(mid+1,high,v);
    
    return curr;
}

TreeNode* mergeBSTs(TreeNode* root1, TreeNode* root2){
    vector<int>first;
    vector<int>second;
    vector<int>final;
    getInOrderSeq(root1,first);
    getInOrderSeq(root2,second);

    merge(first,second,final);
    return arrToBST(0,final.size()-1,final);
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
    TreeNode* root1= new TreeNode(2);
    root1->left=new TreeNode(1);
    root1->right=new TreeNode(4);

    TreeNode* root2= new TreeNode(9);    
    root2->left=new TreeNode(3);
    root2->right=new TreeNode(12);

    TreeNode* root=mergeBSTs(root1,root2);
    preOrder(root);
    cout<<endl;
}