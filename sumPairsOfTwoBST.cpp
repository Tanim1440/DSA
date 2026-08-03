class Solution {
  public:
    void getInOrderSeq(Node* root, vector<int>&vec){
        if(root==NULL){
            return;
        }
        getInOrderSeq(root->left,vec);
        vec.push_back(root->data);
        getInOrderSeq(root->right,vec);
    }
    
    int getPairCount(vector<int>first, vector<int>second, int x){
        int ans=0;
        for(int i=0;i<first.size();i++){
            if(x<first[i]){
                return ans;
            }
            int find=(x-first[i]);
            int low=0,high=second.size()-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(second[mid]==find){
                   ans++;
                   break;
                }
                else if(second[mid]>find){
                   high=mid-1;
                }else{
                   low=mid+1;
                }
            } 
        }
        return ans;
    }
    
    int countPairs(Node* root1, Node* root2, int x) {
        vector<int>first;
        vector<int>second;
        getInOrderSeq(root1,first);
        getInOrderSeq(root2,second);
        
        return getPairCount(first,second,x);
    }
};