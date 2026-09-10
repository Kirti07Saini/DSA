class Solution {
public:
    int result;
    pair<int,int> solve(TreeNode* root){
        if(root==NULL){
            return {0,0}; //sum, count->ki kinti nodes hai
        }
        auto p1=solve(root->left);
        auto p2=solve(root->right);
        int totalsum=p1.first+p2.first+root->val;
        int totalcount=p1.second+p2.second+1;
        int avg=totalsum/totalcount;
        if(avg==root->val){
            result+=1;
        }
        return{totalsum,totalcount};
    }
    int averageOfSubtree(TreeNode* root) {
        result=0;
        solve(root);
        return result;
    }
};