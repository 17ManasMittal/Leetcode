class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int cnt=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(mp.find(sum-goal)!=mp.end()){
                cnt+=mp[sum-goal];
            }
            mp[sum]++;
        }
        return cnt;
    }
};
