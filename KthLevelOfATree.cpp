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
void KthLevel(Tree* root, int K, int currLevel){
    if(root==NULL){
        return;
    }
    if(currLevel==K){
        cout<<root->data<<" ";
        return;
    }
    KthLevel(root->left,K,currLevel+1);
    KthLevel(root->right,K,currLevel+1);
}
int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Tree* root = buildTree(nodes);
    KthLevel(root,3,1);
}