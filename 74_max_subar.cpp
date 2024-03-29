class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        dp[0] = nums[0];
        int ans = dp[0];
        for(int i = 1;i <nums.size();i++){
            dp[i] = nums[i] + max(0,dp[i-1]);
            ans = max(ans,dp[i]);
        }
        return ans;
    }
};