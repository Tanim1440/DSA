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

void topView(Tree* root){
    queue<pair<Tree*,int>>Q; //(node*,HD)
    map<int,int>m; //(HD,root->data)
    Q.push(make_pair(root,0));
    while(!Q.empty()){
        pair<Tree*,int>current=Q.front();
        Q.pop();
        Tree* CurrNode= current.first;
        int currHD=current.second;
        m[currHD]=CurrNode->data;
        // if(m.count(currHD)==0){
        //     m[currHD]=CurrNode->data;
        // }
        if(CurrNode->left!=NULL){
            pair<Tree*,int>left=make_pair(CurrNode->left,currHD-1);
            Q.push(left);
        }
        if(CurrNode->right!=NULL){
            pair<Tree*,int>right=make_pair(CurrNode->right,currHD+1);
            Q.push(right);
        }
    }
    for(auto it:m){
        cout<<it.second<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Tree* root = buildTree(nodes);
    topView(root);
}