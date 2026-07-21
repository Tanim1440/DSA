#include<iostream>
#include<vector>
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

bool isIdentical(Tree* root1, Tree* root2){
    if(root1==NULL && root2==NULL){
        return true;
    }else if(root1==NULL || root2==NULL){
        return false;
    }

    if(root1->data!=root2->data){
        return false;
    }
    return isIdentical(root1->left,root2->left)&&isIdentical(root1->right,root2->right);
}
bool isSubtree(Tree* root, Tree* subRoot){
    if(root==NULL && subRoot==NULL){
        return true;
    }else if(root==NULL || subRoot==NULL){
        return false;
    }
     
    if(root->data==subRoot->data){
       if(isIdentical(root,subRoot)){
        return true;
       }
    }
    int left = isSubtree(root->left,subRoot);
    if(!left){
       return isSubtree(root->right,subRoot);
    }
    return true;
}

int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Tree* root = buildTree(nodes);

    Tree* subRoot = new Tree(2);
    subRoot->left = new Tree(4);
    subRoot->right = new Tree(5);

    cout<<isSubtree(root,subRoot)<<endl;
}