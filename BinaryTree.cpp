#include<iostream>
#include<vector>
#include<queue>
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
    Tree* current = new Tree(nodes[indx]);
    current->left = buildTree(nodes);
    current->right = buildTree(nodes);

    return current;
}

void preorder(Tree* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Tree* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postOrder(Tree* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void levelOrder(Tree* root){
    queue<Tree*>Q;
    Q.push(root);
    Q.push(NULL);
    // int sum=0;
    while(!Q.empty()){
        Tree* curr=Q.front();
        Q.pop();
        if(curr==NULL){
            // cout<<"sum:"<<sum;
            // sum=0;
            if(Q.empty()){
                break;
            }
            cout<<endl;
            Q.push(NULL);
        }else{
            cout<<curr->data<<" ";
            // sum+=curr->data;
            if(curr->left!=NULL){
               Q.push(curr->left);
            }
            if(curr->right!=NULL){
               Q.push(curr->right);
            } 
        }
    }
}

int height(Tree* root){
    if(root==NULL){
        return 0;
    }
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
    return max(leftHeight,rightHeight)+1;
}
int count(Tree* root){
    if(root==NULL){
        return 0;
    }
    int leftCount=count(root->left);
    int rightCount=count(root->right);
    return leftCount+rightCount+1;
}
int nodeSum(Tree* root){
    if(root==NULL){
        return 0;
    }
    int leftSum=nodeSum(root->left);
    int rightSum=nodeSum(root->right);
    return leftSum+rightSum+root->data;
}
int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Tree* root = buildTree(nodes);
    // cout<<"Root:"<<root->data;
    // preorder(root);
    // inorder(root);
    // postOrder(root);
    // levelOrder(root);
    // cout<<"Height:"<<height(root);
    // cout<<"total nodes:"<<count(root);
    cout<<"Total sum:"<<nodeSum(root);
}