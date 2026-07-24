#include<iostream>
#include<queue>
#include<map>
using namespace std;

class Tree{
    public:
    int data;
    Tree* left;
    Tree* right;

    Tree(int data){
        this->data=data;
        left=right=NULL;
    }
};
static int indx=-1;
Tree* buildTree(vector<int>nodes){
    indx++;
    if(nodes[indx]==-1){
        return NULL;
    }
    Tree* newTree=new Tree(nodes[indx]);
    newTree->left=buildTree(nodes);
    newTree->right=buildTree(nodes);

    return newTree;
}
int KthAncestor(Tree* root, int n, int k){
    if(root==NULL){
        return -1;
    }
    if(root->data==n){
        return 0;
    }
    int left=KthAncestor(root->left,n,k);

    if(left!=-1){
        left+=1;
        if(left==k) cout<<"kth ancestor:"<< root->data;
        return left;
    }
    int right=KthAncestor(root->right,n,k);
    if(right!=-1){
        right+=1;
        if(right==k) cout<<"kth ancestor:"<< root->data;
        return right;
    }
    return -1;
}
int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Tree* root = buildTree(nodes);
    KthAncestor(root,5,1);
}