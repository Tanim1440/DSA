#include<iostream>
#include<vector>
#include<algorithm>
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
int height(Tree* root){
    if(root==NULL){
        return 0;
    }
    int left=height(root->left);
    int right= height(root->right);
    return max(left,right)+1;
}
int diameter1(Tree* root){ //O(n^2)
    if(root==NULL){
        return 0;
    }
    int rootDiameter=height(root->left)+height(root->right)+1;
    int leftDiameter=diameter1(root->left);
    int rightDiameter=diameter1(root->right);

    return max(rootDiameter,max(leftDiameter,rightDiameter));
}
pair<int,int> diameter2(Tree* root){ //O(n)
    if(root==NULL){
        return make_pair(0,0);
    }
    pair<int,int> leftInfo= diameter2(root->left);//diameter,height
    pair<int,int> rightInfo= diameter2(root->right);//diameter,height
    
    int hight=max(leftInfo.second, rightInfo.second)+1;
    int rootDiameter=leftInfo.second+rightInfo.second+1;
    int finalDiameter=max(rootDiameter, max(leftInfo.first, rightInfo.first));

    return make_pair(finalDiameter,hight);
}
int main(){
 vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
 Tree* root = buildTree(nodes);
 cout<<"height:"<<height(root)<<endl;
 cout<<"Diameter:"<<diameter1(root)<<endl;
 cout<<"Diameter2:"<<diameter2(root).first;
}