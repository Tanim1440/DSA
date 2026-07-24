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
Tree* LCA(Tree* root, int n1, int n2){ 
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    Tree* left=LCA(root->left,n1,n2);
    Tree* right=LCA(root->right,n1,n2);
    
    if(left!=NULL && right!=NULL ) return root;
    return left==NULL ? right : left;
}
int distance(Tree* lca, int n){
    if(lca==NULL){
        return -1;
    }
    if(lca->data==n){
        return 0;
    }
    int left=distance(lca->left,n);
    if(left!=-1) return left+1;
    int right=distance(lca->right,n);
    if(right!=-1) return right+1;

    return -1;
}
int minDistance(Tree* root, int n1, int n2){
    Tree* lca= LCA(root,n1,n2);
    int distance1=distance(lca,n1);
    int distance2=distance(lca,n2);
    
    return distance1+distance2;
}
int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Tree* root = buildTree(nodes);
    int n1=5,n2=3;
    cout<<"MinDistance:"<<minDistance(root,n1,n2);
}