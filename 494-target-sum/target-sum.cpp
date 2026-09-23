class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {

        int n = nums.size();

        int total = 0;
        for(int x : nums) {
            total += x;
        }

        if(abs(target) > total)
            return 0;

        if((target + total) % 2 != 0)
            return 0;

        int sum = (target + total) / 2;

        vector<vector<int>> dp(n + 1, vector<int>(sum + 1, 0));

        dp[n][0] = 1;

        for(int i = n - 1; i >= 0; i--) {

            for(int j = 0; j <= sum; j++) {

                dp[i][j] = dp[i + 1][j];

                if(nums[i] <= j) {
                    dp[i][j] += dp[i + 1][j - nums[i]];
                }
            }
        }

        return dp[0][sum];
    }
};