class Solution {
public:
    int fun(vector<int>& nums,int i,int prev,int n,vector<vector<int>>&dp){
        if(n==i){
            return 0;
        }
        if(dp[i][prev+1] != -1){
            return dp[i][prev+1];
        }
        if(prev==-1 || nums[i]>nums[prev]){
            int yes=1+ fun(nums,i+1,i,n,dp);
            int no=fun(nums,i+1,prev,n,dp);
            return dp[i][prev+1]=max(yes,no);

        }
        return dp[i][prev+1]=fun(nums,i+1,prev,n, dp);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n, vector<int>(n+1, -1));
         
        return fun(nums,0,-1,n,dp);
    }
};