class Solution {
public:
    int solve(int idx,vector<int> nums,vector<int> &dp){
        if(idx>=nums.size()){
            return 0;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        int steal=nums[idx]+solve(idx+2,nums,dp);
        int skip=solve(idx+1,nums,dp);
        return dp[idx]=max(steal,skip);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        int ans=solve(0,nums,dp);
        return ans;
    }
};
