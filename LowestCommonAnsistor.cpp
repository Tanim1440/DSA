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
// bool pathFinder(Tree* root, int n, vector<int>&temp){ // time O(n), space O(n)
//     if(root==NULL){
//         return false;
//     }
//     if(root->data==n){
//         return true;
//     }
//     temp.push_back(root->data);
//     int left=pathFinder(root->left,n,temp);
//     int right=pathFinder(root->right,n,temp);
//     if(left || right){
//         return true;
//     }
//     temp.pop_back();
//     return false;
// }
// int LCA(Tree* root, int n1, int n2){
//     vector<int>first;
//     vector<int>second;
//     pathFinder(root,n1,first);
//     pathFinder(root,n2,second);
//     int lca=-1;
//     for(int i=0,j=0;i<first.size() && j<second.size();i++,j++){
//         if(first[i]!=second[j]){
//             return lca;
//         }
//         lca=first[i];
//     }
//     return lca;
// }
Tree* LCA(Tree* root, int n1, int n2){ //O(n) , O(1);
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
int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Tree* root = buildTree(nodes);
    int n1=4,n2=6;
    Tree* ans=LCA(root,n1,n2);
    if(ans==NULL){
        cout<<"lca:"<<-1<<endl;
    }else{
        cout<<"lca:"<<ans->data;
    }
}