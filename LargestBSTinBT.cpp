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

class Info{
public:
    bool isBST;
    int min;
    int max;
    int sz;
  
    Info(bool isBST, int min, int max, int sz){
        this->isBST=isBST;
        this->min=min;
        this->max=max;
        this->sz=sz;
    }
};

static int maxSize;
// static TreeNode* maxRoot;

Info* LargestBST(TreeNode* root){
    if(root==NULL){
        return new Info(true,INT_MAX,INT_MIN,0);
    }

    Info* leftINFO=LargestBST(root->left);
    Info* rightINFO=LargestBST(root->right);

    int currMin=min(root->val,min(leftINFO->min,rightINFO->min));
    int currMax=max(root->val,max(leftINFO->max,rightINFO->max));
    int currSz=leftINFO->sz+rightINFO->sz+1;

    if(leftINFO->isBST && rightINFO->isBST
        && root->val>leftINFO->max 
        && root->val<rightINFO->min){
            // if(maxSize<currSz){ //if maxBST root need to calculate
            //     maxRoot=root;
            // }
            maxSize=max(currSz,maxSize);
            return new Info(true,currMax,currMin,currSz);
    }
    return new Info(false,currMax,currMin,currSz);
}
int main(){
    TreeNode* root= new TreeNode(50);
    root->left=new TreeNode(30);
    root->left->left=new TreeNode(5);
    root->left->right=new TreeNode(20);

        
    root->right=new TreeNode(60);
    root->right->left=new TreeNode(45);
    root->right->right=new TreeNode(70);
    root->right->right->left=new TreeNode(65);
    root->right->right->right=new TreeNode(80);

    LargestBST(root);
    cout<<"max size:"<<maxSize<<endl;
    // cout<<"max node is:"<<maxRoot->val;
}